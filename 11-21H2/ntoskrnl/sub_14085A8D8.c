/*
 * XREFs of sub_14085A8D8 @ 0x14085A8D8
 * Callers:
 *     sub_14085A828 @ 0x14085A828 (sub_14085A828.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 */

__int64 sub_14085A8D8()
{
  volatile __int64 *v0; // rax
  volatile __int64 *v1; // rbx
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v0 = (volatile __int64 *)sub_140347DB0();
  v5 = 0LL;
  v1 = v0;
  v2 = sub_140784CB0(0xEu, 0, 0LL, &v5, 0LL);
  v3 = v5;
  if ( v2 < 0 )
    v3 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    _InterlockedExchange64(v1 + 154, v3 + 4);
    _InterlockedExchange64(v1 + 155, v5 + 2 * (*(unsigned __int16 *)(v5 + 2) + 2LL));
    *((_QWORD *)v1 + 153) = v5;
  }
  else
  {
    *((_QWORD *)v1 + 154) = 0LL;
    *((_QWORD *)v1 + 155) = 0LL;
    *((_QWORD *)v1 + 153) = 0LL;
  }
  return 0LL;
}
