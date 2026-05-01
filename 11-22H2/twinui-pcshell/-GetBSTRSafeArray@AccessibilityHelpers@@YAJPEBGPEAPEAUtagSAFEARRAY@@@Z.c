/*
 * XREFs of ?GetBSTRSafeArray@AccessibilityHelpers@@YAJPEBGPEAPEAUtagSAFEARRAY@@@Z @ 0x1805DD5FC
 * Callers:
 *     ?get_DropEffects@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1805DDE50 (-get_DropEffects@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?get_DropEffects@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1805F7750 (-get_DropEffects@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibilityHelpers::GetBSTRSafeArray(
        const OLECHAR *this,
        unsigned __int16 *a2,
        struct tagSAFEARRAY **a3)
{
  BSTR v4; // rsi
  HRESULT v5; // ebx
  SAFEARRAY *Vector; // rax
  SAFEARRAY *v7; // rdi
  LONG rgIndices; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v4 = SysAllocString(this);
  if ( v4 )
  {
    Vector = SafeArrayCreateVector(8u, 0, 1u);
    v7 = Vector;
    if ( Vector )
    {
      rgIndices = 0;
      v5 = SafeArrayPutElement(Vector, &rgIndices, v4);
      if ( v5 >= 0 )
      {
        *(_QWORD *)a2 = v7;
        return (unsigned int)v5;
      }
      SafeArrayDestroy(v7);
    }
    else
    {
      v5 = -2147024882;
    }
    SysFreeString(v4);
    return (unsigned int)v5;
  }
  return (unsigned int)-2147024882;
}
