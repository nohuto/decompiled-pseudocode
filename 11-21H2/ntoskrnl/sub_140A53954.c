/*
 * XREFs of sub_140A53954 @ 0x140A53954
 * Callers:
 *     sub_14038D0F4 @ 0x14038D0F4 (sub_14038D0F4.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403B1CF0 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

unsigned __int64 sub_140A53954()
{
  int v0; // r8d
  bool v1; // di
  unsigned __int64 result; // rax
  unsigned int v3; // r10d
  __int64 v4; // rdx
  char v5; // r9
  int v6; // ecx
  int v7; // ebx
  unsigned __int64 v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-8h]

  v8 = 0x7010600070106LL;
  v0 = 0;
  _disable();
  v1 = (v10 & 0x200) != 0;
  result = __readmsr(0x277u);
  v3 = 0;
  v9 = result;
  v4 = 0LL;
  do
  {
    v5 = *((_BYTE *)&v9 + v4);
    if ( v5 == 6 && *((_BYTE *)&v8 + v4) != 6 )
    {
      v7 = 2;
LABEL_16:
      __wbinvd();
      goto LABEL_13;
    }
    v6 = v0 | 1;
    if ( v5 == *((_BYTE *)&v8 + v4) )
      v6 = v0;
    ++v3;
    ++v4;
    v0 = v6;
  }
  while ( v3 < 8 );
  if ( !v6 )
    goto LABEL_7;
  v7 = v6 & 2;
  if ( (v6 & 2) != 0 )
    goto LABEL_16;
LABEL_13:
  KeFlushCurrentTbImmediately();
  __writemsr(0x277u, v8);
  if ( v7 )
    __wbinvd();
  result = KeFlushCurrentTbImmediately();
LABEL_7:
  if ( v1 )
    _enable();
  return result;
}
