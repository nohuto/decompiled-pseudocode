/*
 * XREFs of sub_14068A5A8 @ 0x14068A5A8
 * Callers:
 *     sub_1406890A0 @ 0x1406890A0 (sub_1406890A0.c)
 * Callees:
 *     sub_14020AA74 @ 0x14020AA74 (sub_14020AA74.c)
 *     RtlAreBitsClear @ 0x14020AED0 (RtlAreBitsClear.c)
 *     sub_14079878C @ 0x14079878C (sub_14079878C.c)
 */

char __fastcall sub_14068A5A8(__int64 a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // edx

  v4 = a2;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 104) << 9) + 40LL + 8LL * (unsigned int)sub_14079878C((PRTL_BITMAP)(a1 + 88));
  if ( RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), 0, 8u) )
    v6 += 4104LL;
  v7 = *(unsigned int *)(a1 + 180);
  v8 = 0;
  *a3 = 0;
  v9 = v6 + v7;
  if ( *(_BYTE *)(a1 + 195) )
  {
    v8 = 2;
    *a3 = 2;
  }
  if ( v9 > 0x2000000 )
  {
    v8 |= 4u;
    *a3 = v8;
  }
  if ( *(_DWORD *)(a1 + 172) == -1 )
  {
    v8 |= 8u;
    *a3 = v8;
  }
  if ( v8 )
  {
    LOBYTE(v11) = sub_14020AA74((_QWORD *)(a1 + 4208));
    if ( (_BYTE)v11 )
    {
      v12 = v8 | 1;
      goto LABEL_14;
    }
  }
  v10 = *(unsigned int *)(a1 + 180);
  if ( v10 + v6 >= v4 )
  {
    v8 |= 0x10u;
    *a3 = v8;
    LODWORD(v10) = *(_DWORD *)(a1 + 180);
  }
  v11 = v6 + (unsigned int)v10;
  if ( v11 >= v4 )
  {
    v12 = v8 | 0x20;
LABEL_14:
    *a3 = v12;
  }
  return v11;
}
