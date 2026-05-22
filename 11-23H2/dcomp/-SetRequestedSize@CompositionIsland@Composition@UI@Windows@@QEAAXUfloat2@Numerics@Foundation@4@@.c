/*
 * XREFs of ?SetRequestedSize@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006B130
 * Callers:
 *     ?put_RequestedSize@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006B0B0 (-put_RequestedSize@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundati.c)
 * Callees:
 *     ??9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z @ 0x18006B2A8 (--9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::SetRequestedSize(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v6 = a2;
  if ( (unsigned __int8)Windows::Foundation::Numerics::operator!=(a1 + 352, &v6) || !*(_BYTE *)(a1 + 360) )
  {
    *v4 = a2;
    AcquireSRWLockShared(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
    if ( *(_DWORD *)(a1 + 184) )
    {
      v5 = *(_QWORD *)(a1 + 440);
      v7 = *(_QWORD *)(a1 + 224);
      *(_BYTE *)(a1 + 360) = 1;
      CoreUICallSend(v5, &v7, 1LL, 7LL);
    }
    ReleaseSRWLockShared(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  }
}
