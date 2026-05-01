/*
 * XREFs of sub_180012160 @ 0x180012160
 * Callers:
 *     sub_18000F974 @ 0x18000F974 (sub_18000F974.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180011428 @ 0x180011428 (sub_180011428.c)
 */

__int64 (*__fastcall sub_180012160(__int64 a1, __int64 a2))(void)
{
  unsigned __int32 v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  __int64 (*result)(void); // rax
  _DWORD v8[9]; // [rsp+20h] [rbp-50h] BYREF
  int v9; // [rsp+44h] [rbp-2Ch]
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  _m_prefetchw((const void *)a2);
  v3 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v4 = (v3 >> 1) & 0xF;
  if ( v4 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v4 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v4);
  }
  v8[0] = 2;
  v8[1] = v4 & 1;
  v8[2] = 6;
  v8[3] = ((unsigned __int8)v4 >> 1) & 1;
  v8[4] = 3;
  v8[5] = ((unsigned __int8)v4 >> 2) & 1;
  v8[6] = 7;
  v10 = 4;
  v8[8] = 0;
  v8[7] = v4 >= 8;
  if ( (v3 & 0x4000) != 0 )
  {
    v9 = 0;
    v11 = (v3 >> 5) & 0x1FF;
  }
  else
  {
    v11 = 0;
    v9 = (v3 >> 5) & 0x1FF;
  }
  v12 = 1;
  v14 = 5;
  if ( (v3 & 0x400000) != 0 )
  {
    v13 = 0;
    v15 = (v3 >> 15) & 0x7F;
  }
  else
  {
    v15 = 0;
    v13 = (v3 >> 15) & 0x7F;
  }
  v5 = 0;
  v6 = v8;
  do
  {
    result = (__int64 (*)(void))HIDWORD(*v6);
    if ( (_DWORD)result )
      result = sub_180011428();
    ++v5;
    ++v6;
  }
  while ( v5 < 8 );
  return result;
}
