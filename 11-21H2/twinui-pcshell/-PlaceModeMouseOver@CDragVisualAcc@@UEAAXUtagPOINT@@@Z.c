/*
 * XREFs of ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x18053C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1804B8170 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x18053B294 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18053C520 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 */

void __fastcall CDragVisualAcc::PlaceModeMouseOver(CDragVisualAcc *this, struct tagPOINT a2)
{
  BOOL v3; // edi
  int v4; // r8d
  const WCHAR *v5; // rcx
  bool v6; // zf
  unsigned __int16 *v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  struct tagPOINT v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  if ( (unsigned int)(*((_DWORD *)this + 4) - 1) <= 1 )
  {
    v3 = Geometry::CRect::Contains((CDragVisualAcc *)((char *)this + 40), &v10);
    if ( v4 == 1 )
    {
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
      v5 = &LocaleName;
      v6 = *((_QWORD *)this + 10) == 0LL;
      v8 = -1LL;
      if ( !v6 )
        v5 = (const WCHAR *)*((_QWORD *)this + 10);
      v9 = -1LL;
      if ( (int)GenerateDropEffectPlaceMode((__int64)v5, v3 + 1, &v7) >= 0 )
        CDragVisualAcc::SetDropEffect(this, v7);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
    }
  }
}
