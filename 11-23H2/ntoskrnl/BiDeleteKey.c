/*
 * XREFs of BiDeleteKey @ 0x140803BA8
 * Callers:
 *     BcdDeleteObject @ 0x140802FD0 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140369B6C (BiSanitizeHandle.c)
 *     BiZwDeleteKey @ 0x140373E50 (BiZwDeleteKey.c)
 *     CmSiCloseSection @ 0x140373F9C (CmSiCloseSection.c)
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140803DDC (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiDeleteKey(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rsi
  NTSTATUS v3; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  v1 = BiSanitizeHandle(a1);
  P = 0LL;
  v2 = (void *)v1;
  if ( (int)BiEnumerateSubKeys(v1, &P, &v7) >= 0 && v7 )
  {
    v5 = P;
    v6 = v7;
    do
    {
      if ( (int)BiOpenKey(v2, *v5, 983103LL, &v9) >= 0 && (int)BiDeleteKey(v9) < 0 )
        BiCloseKey(v9);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  v3 = BiZwDeleteKey(v2);
  if ( v3 >= 0 )
    CmSiCloseSection(v2);
  return (unsigned int)v3;
}
