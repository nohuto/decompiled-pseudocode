/*
 * XREFs of ?Release@?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ @ 0x180160080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v4; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v4 = (HSTRING)*((_QWORD *)a1 + 1);
    if ( v4 )
      WindowsDeleteString(v4);
    operator delete((void *)a1, 0x20uLL);
  }
  return v2;
}
