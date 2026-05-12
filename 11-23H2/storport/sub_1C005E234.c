/*
 * XREFs of sub_1C005E234 @ 0x1C005E234
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0022A14 @ 0x1C0022A14 (sub_1C0022A14.c)
 */

__int64 __fastcall sub_1C005E234(__int64 a1, IRP *a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // rcx
  __int64 ***v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v16; // [rsp+28h] [rbp-8h]

  v16 = &v15;
  v3 = a1 + 640;
  v15 = (__int64 *)&v15;
  while ( 1 )
  {
    v7 = sub_1C0022A14(v3);
    if ( !v7 )
      break;
    v5 = v16;
    v6 = (__int64 ***)(v7 + 168);
    if ( *v16 != (__int64 *)&v15 )
LABEL_15:
      __fastfail(3u);
    v6[1] = v16;
    *v6 = &v15;
    *v5 = v6;
    v16 = (__int64 **)v6;
  }
  *(_BYTE *)(a1 + 692) = 0;
  while ( 1 )
  {
    v8 = v15;
    if ( v15 == (__int64 *)&v15 )
      break;
    if ( (__int64 **)v15[1] != &v15 )
      goto LABEL_15;
    v9 = (__int64 *)*v15;
    if ( *(__int64 **)(*v15 + 8) != v15 )
      goto LABEL_15;
    v15 = (__int64 *)*v15;
    v10 = v8 - 21;
    v9[1] = (__int64)&v15;
    v11 = *(_QWORD *)(v8[2] + 8);
    *(_BYTE *)(v11 + 3) = 22;
    *(v8 - 14) = 0LL;
    sub_1C000729C(a1);
    if ( (*((_BYTE *)v10 + 142) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(v11 + 2) == 40 )
      {
        v12 = *(_QWORD **)(v11 + 96);
        *(_QWORD *)(v11 + 96) = v12[2];
      }
      else
      {
        v12 = *(_QWORD **)(v11 + 48);
        v13 = v12[2];
        *(_QWORD *)(v11 + 56) = 0LL;
        *(_QWORD *)(v11 + 40) = 0LL;
        *(_QWORD *)(v11 + 48) = v13;
      }
      ExFreePoolWithTag(v12, 0x54436152u);
    }
    sub_1C0003440((PIRP)v10, 0, 0xC0000001);
  }
  *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, 0);
}
