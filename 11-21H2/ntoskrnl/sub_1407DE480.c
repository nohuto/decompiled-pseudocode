/*
 * XREFs of sub_1407DE480 @ 0x1407DE480
 * Callers:
 *     sub_1407DE1A8 @ 0x1407DE1A8 (sub_1407DE1A8.c)
 * Callees:
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 */

__int64 __fastcall sub_1407DE480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rsi
  NTSTATUS v13; // edi
  _QWORD *v14; // rdi
  size_t Size; // [rsp+40h] [rbp-31h]
  int Length; // [rsp+50h] [rbp-21h]
  char v18; // [rsp+58h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-9h] BYREF
  __int64 v20[2]; // [rsp+70h] [rbp-1h] BYREF
  int v21[2]; // [rsp+80h] [rbp+Fh] BYREF
  PVOID Object[2]; // [rsp+88h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+27h]

  v19 = 0LL;
  v9 = *(_QWORD *)(a5 + 8);
  v10 = *(_QWORD *)(a5 + 16);
  *(_QWORD *)v21 = 0LL;
  v23 = 0x200000000LL;
  *(_OWORD *)v20 = 0LL;
  *(_OWORD *)Object = 0LL;
  v11 = sub_1407DFC68((unsigned int)v21, a1, v10, v9, 1048577, 16417, 0, a2);
  v12 = v23;
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( a4 )
    {
      v14 = Object[0];
      if ( (int)sub_14071E6BC((struct _FILE_OBJECT *)Object[0], 6, 8u, 0, (struct _IRP *)&v19, &a6, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v19;
        *(_QWORD *)a4 = v14[3];
        *(_DWORD *)(a4 + 8) = v12;
      }
    }
    v18 = 0;
    Length = 0;
    LODWORD(Size) = 8 * *(_DWORD *)(a3 + 4) + 16;
    v13 = sub_1407308F0(*(void **)v21, 0LL, 0LL, 0LL, (unsigned __int64)v20, 590112, (char *)a3, Size, 0LL, Length, v18);
    if ( v13 >= 0 )
      v13 = 0;
  }
  if ( (v12 & 0x400000000LL) != 0 )
    sub_1407DFFD8(v21, a1);
  return (unsigned int)v13;
}
