/*
 * XREFs of ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002B938
 * Callers:
 *     ?DCompositionCreateDevice3@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18001BDAC (-DCompositionCreateDevice3@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEqualGUID(const struct _GUID *a1, const struct _GUID *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&a2->Data1 )
    v2 = *(_QWORD *)a1->Data4 - *(_QWORD *)a2->Data4;
  return v2 == 0;
}
