/*
 * XREFs of sub_1409779A4 @ 0x1409779A4
 * Callers:
 *     sub_140971650 @ 0x140971650 (sub_140971650.c)
 * Callees:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054F4CC @ 0x14054F4CC (sub_14054F4CC.c)
 *     sub_1405994CC @ 0x1405994CC (sub_1405994CC.c)
 *     sub_1405A2D30 @ 0x1405A2D30 (sub_1405A2D30.c)
 *     sub_14080C400 @ 0x14080C400 (sub_14080C400.c)
 *     sub_140931ED4 @ 0x140931ED4 (sub_140931ED4.c)
 *     sub_1409328A8 @ 0x1409328A8 (sub_1409328A8.c)
 *     sub_1409682E4 @ 0x1409682E4 (sub_1409682E4.c)
 *     sub_14097389C @ 0x14097389C (sub_14097389C.c)
 *     sub_14097469C @ 0x14097469C (sub_14097469C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409779A4(ULONG64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rcx
  void *v8; // rdi
  SIZE_T v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r15
  PVOID v13; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-89h] BYREF
  _RTL_BITMAP_EX v16[7]; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v17[3]; // [rsp+A0h] [rbp-9h] BYREF

  v15[0] = 0;
  memset(v17, 0, sizeof(v17));
  memset(v16, 0, 0x68uLL);
  v4 = *(_DWORD *)(a1 + 64);
  v16[0].SizeOfBitMap = a1;
  v5 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  LODWORD(v16[1].Buffer) = v5;
  LODWORD(v9) = sub_140931ED4(v7, v15);
  if ( (v9 & 0x80000000) == 0LL )
  {
    v9 = v15[0];
    if ( v15[0] )
    {
      if ( (unsigned int)sub_14027B080(*(_QWORD *)(a1 + 48)) == 1 )
      {
        sub_14030D5C0(xmmword_140C533C8, 0LL, (__int64)v17, v10);
        v6 = sub_1405A2D30(a1);
        v11 = sub_14027B520();
      }
      else
      {
        v11 = (__int64)sub_14026DFC0(1);
      }
      v12 = v11;
      v13 = sub_1402828F0(256, v9, 0x54555048u);
      v8 = v13;
      if ( v13 )
      {
        LODWORD(v9) = sub_1409328A8(*(PVOID *)(a1 + 48), (__int64)v13, v9);
        if ( (v9 & 0x80000000) == 0LL )
        {
          LODWORD(v9) = sub_1409682E4((__int64)v16, v12);
          if ( (v9 & 0x80000000) == 0LL )
          {
            LODWORD(v9) = sub_14097389C((__int64 *)v16);
            if ( (v9 & 0x80000000) == 0LL )
            {
              LODWORD(v9) = sub_14097469C((__int64)v16, (int)v8);
              if ( (v9 & 0x80000000) == 0LL )
                LODWORD(v9) = sub_14054F4CC(*(_QWORD *)(a1 + 48), 0, 0);
            }
          }
        }
      }
      else
      {
        LODWORD(v9) = -1073741670;
      }
    }
  }
  sub_14080C400(v16);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v6 )
  {
    sub_14021803C((__int64)&qword_140C533D8);
    sub_1405994CC(v6);
    sub_1402D0930((__int64)v17, 0LL);
  }
  if ( (v9 & 0x80000000) == 0LL )
    *(_QWORD *)(a2 + 120) = 0LL;
  return (unsigned int)v9;
}
