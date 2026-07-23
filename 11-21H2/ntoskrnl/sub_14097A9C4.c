/*
 * XREFs of sub_14097A9C4 @ 0x14097A9C4
 * Callers:
 *     sub_14097A228 @ 0x14097A228 (sub_14097A228.c)
 *     sub_14097A714 @ 0x14097A714 (sub_14097A714.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 */

NTSTATUS __fastcall sub_14097A9C4(void *a1, __int64 a2, KPROCESSOR_MODE a3, __int64 *a4, ULONG_PTR *a5)
{
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  ULONG_PTR v11; // rsi
  int v12; // edi
  ULONG_PTR v13; // rbx
  PVOID Object; // [rsp+50h] [rbp-31h] BYREF
  __int64 v15; // [rsp+58h] [rbp-29h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-21h] BYREF

  v15 = 0LL;
  Object = 0LL;
  memset(v16, 0, sizeof(v16));
  result = ObReferenceObjectByHandle(a1, 4u, MmSectionObjectType, a3, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v9 = sub_140287970((__int64)Object);
    v11 = v9;
    if ( (v8[14] & 0x20) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 92) & 0xC0000) != 0 )
        goto LABEL_9;
      if ( (*(_QWORD *)(*(_QWORD *)(v9 + 96) + 40LL) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
      {
        v13 = sub_140281750(v9);
        v12 = sub_1406B79C8(v13, v11, 0xFFFFFFFF, a2, 0x40000000, 4, 0);
        sub_140280D08(v11, v13);
        if ( v12 < 0 )
          goto LABEL_10;
        if ( (*(_DWORD *)(v11 + 92) & 0xC0000) != 0 )
        {
LABEL_9:
          sub_14030D5C0(qword_140D06A30, 0LL, (__int64)v16, v10);
          Object = 0LL;
          v12 = MmMapViewOfSection(
                  (__int64)v8,
                  qword_140D06A30,
                  a4,
                  0LL,
                  0LL,
                  (unsigned int *)&v15,
                  (__int64 *)&Object,
                  1,
                  0,
                  2);
          sub_1402D0930((__int64)v16, 0LL);
          *a5 = v11;
          goto LABEL_10;
        }
      }
      v12 = -1073740760;
    }
    else
    {
      v12 = -1073741751;
    }
LABEL_10:
    ObfDereferenceObject(v8);
    return v12;
  }
  return result;
}
