/*
 * XREFs of sub_140977B70 @ 0x140977B70
 * Callers:
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054F4CC @ 0x14054F4CC (sub_14054F4CC.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_140971650 @ 0x140971650 (sub_140971650.c)
 *     sub_140972C58 @ 0x140972C58 (sub_140972C58.c)
 *     sub_140972E78 @ 0x140972E78 (sub_140972E78.c)
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140977B70(unsigned int a1, unsigned int a2)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *v5; // r12
  int v6; // edi
  unsigned __int64 *v7; // rbx
  int v8; // eax
  signed int v9; // r15d
  int v10; // eax
  _DWORD v12[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0LL;
  v5 = sub_1406F5B50();
  v6 = 0;
  sub_140972E78((unsigned __int64 *)&qword_140C533B0, 0LL, a1, a2);
  if ( (dword_140D06880 & 0x4000) != 0 )
  {
    v7 = (unsigned __int64 *)qword_140C533B8;
    v12[6] = a1;
    v12[7] = a2;
    if ( qword_140C533B8 )
    {
      do
      {
        v8 = sub_140972C58((__int64)v12, (__int64)v7);
        if ( v8 >= 0 )
        {
          if ( v8 <= 0 )
            break;
          v7 = (unsigned __int64 *)v7[1];
        }
        else
        {
          v7 = (unsigned __int64 *)*v7;
        }
      }
      while ( v7 );
      if ( v7 )
      {
        v9 = sub_14054F4CC(0LL, a1, a2);
        sub_140974FBC(a1, a2, 0LL, v9, 2);
        if ( v9 < 0 )
        {
          v6 = v9;
        }
        else
        {
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140C533B8, v7);
          v4 = v7;
        }
      }
    }
    v10 = sub_140971650(a1, a2, 0LL, 0LL);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741515 && v6 >= 0 )
      v6 = v10;
  }
  sub_1406F5AF0((__int64)v5);
  sub_140973630(a1, a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
