/*
 * XREFs of sub_140758DB8 @ 0x140758DB8
 * Callers:
 *     sub_1406E80C4 @ 0x1406E80C4 (sub_1406E80C4.c)
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796C40 @ 0x140796C40 (sub_140796C40.c)
 *     sub_1409F5570 @ 0x1409F5570 (sub_1409F5570.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140758C68 @ 0x140758C68 (sub_140758C68.c)
 *     sub_140758ED8 @ 0x140758ED8 (sub_140758ED8.c)
 *     sub_140881A9A @ 0x140881A9A (sub_140881A9A.c)
 *     RtlPcToFilePath @ 0x1408828C0 (RtlPcToFilePath.c)
 *     sub_140883C5A @ 0x140883C5A (sub_140883C5A.c)
 *     sub_1409E0328 @ 0x1409E0328 (sub_1409E0328.c)
 *     sub_1409E92F8 @ 0x1409E92F8 (sub_1409E92F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140758DB8(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  _BYTE *v9; // r14
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  ULONG v15; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v16; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v18[512]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_QWORD *)(a3 + 88);
  HIDWORD(v16) = 0;
  v7 = 0;
  if ( !v4 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x20) != 0 || (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
  {
    LODWORD(v16) = 0x2000000;
    P = v18;
    if ( a2 )
      v11 = sub_140881A9A(v4, &v16);
    else
      v11 = RtlPcToFilePath(v4, &v16);
    v7 = v11;
    if ( v11 >= 0 )
      sub_140883C5A(a1, &v16, *(_QWORD *)(a3 + 32) + 40LL);
    if ( P != v18 )
      ExFreePoolWithTag(P, 0);
  }
  if ( (*(_BYTE *)(a3 + 98) & 8) == 0 )
    return v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v15 = 512;
    v16 = v18;
    v8 = sub_140758C68(a2, a3, (__int64 *)&v16, &v15);
    v9 = v16;
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( EtwEventEnabled(qword_140C15FA8, &stru_1400389C0) )
        sub_1409E0328(v13, v12, v14, a3, a1, v7);
    }
    else
    {
      sub_140758ED8(a1, v16, v15);
      if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0 && (!(_BYTE)KdDebuggerNotPresent && !byte_140C09804 || byte_140C40504) )
        sub_1409E92F8(a1);
    }
    if ( v9 != v18 )
      ExFreePoolWithTag(v9, 0);
    return v7;
  }
  return 3221225659LL;
}
