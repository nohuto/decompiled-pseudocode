/*
 * XREFs of sub_14045FA6C @ 0x14045FA6C
 * Callers:
 *     sub_14027B250 @ 0x14027B250 (sub_14027B250.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14045FA6C(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // ebx
  __int64 v10; // r8
  _DWORD *v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  unsigned int v14; // ecx
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  int v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+44h] [rbp-1Ch]
  __int64 v24; // [rsp+48h] [rbp-18h]
  int v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+54h] [rbp-Ch]

  v26 = 0;
  v24 = a4;
  v9 = *(_DWORD *)(qword_140D05008 + 4248);
  v25 = 32;
  while ( 1 )
  {
    v13 = !_BitScanForward(&v14, v9);
    if ( v13 )
      break;
    v9 &= v9 - 1;
    v10 = v14;
    v11 = (_DWORD *)(32LL * v14 + qword_140D05008 + 4284);
    if ( v11 && (*v11 & 0x2000) != 0 )
    {
      v12 = *(unsigned __int8 *)(qword_140D05008 + 2 * v10 + 4233);
      v23 = 0;
      v22 = 8;
      v21 = a7 + 8 * (v12 - 1);
      sub_1402AB170(
        (__int64)&v21,
        qword_140D05008,
        *(unsigned __int8 *)(qword_140D05008 + 2 * v10 + 4232),
        2u,
        a2,
        0x401802u);
    }
  }
  if ( a1 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1464) + 864LL);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 4248);
      while ( 1 )
      {
        v13 = !_BitScanForward(&v20, v16);
        if ( v13 )
          break;
        v17 = v20;
        v16 &= v16 - 1;
        v18 = (_DWORD *)(32LL * v20 + v15 + 4284);
        if ( v18 )
        {
          if ( (*v18 & 0x2000) != 0 )
          {
            v19 = *(unsigned __int8 *)(v15 + 2 * v17 + 4233);
            v23 = 0;
            v22 = 8;
            v21 = a7 + 8 * (v19 - 1);
            sub_1402AB170((__int64)&v21, v15, *(unsigned __int8 *)(v15 + 2 * v17 + 4232), 2u, a2, 0x401802u);
          }
        }
      }
    }
  }
}
