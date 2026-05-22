/*
 * XREFs of ?put_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@5@@Z @ 0x180167AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ConvertReferenceToValue@M@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@M@Foundation@3@PEAMPEA_N@Z @ 0x1801345CC (--$ConvertReferenceToValue@M@AnimationHelper@Composition@UI@Windows@@YAJPEAU-$IReference@M@Found.c)
 */

__int64 __fastcall Windows::UI::Composition::ScalarNaturalMotionAnimation::Api::put_InitialValue(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  char v6; // al
  char v7; // [rsp+40h] [rbp+18h] BYREF
  int v8; // [rsp+48h] [rbp+20h] BYREF

  result = Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<float>(a2, (__int64)&v8, &v7);
  v4 = 0;
  if ( (int)result >= 0 )
  {
    v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 400);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
    if ( (*(_BYTE *)(a1 - 392) & 2) != 0 )
    {
      if ( v7 )
      {
        v6 = 1;
        *(_DWORD *)(a1 - 16) = v8;
      }
      else
      {
        v6 = 0;
      }
      *(_BYTE *)(a1 - 12) = v6;
    }
    else
    {
      v4 = -2147483629;
      RoOriginateErrorW(
        2147483667LL,
        0LL,
        L"The given object has already been closed / disposed and may no longer be used.");
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v5);
    return v4;
  }
  return result;
}
