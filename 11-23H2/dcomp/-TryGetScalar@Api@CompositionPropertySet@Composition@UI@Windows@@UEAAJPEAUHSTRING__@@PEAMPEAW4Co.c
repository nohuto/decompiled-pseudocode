/*
 * XREFs of ?TryGetScalar@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAMPEAW4CompositionGetValueStatus@345@@Z @ 0x18005BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CompareAnimationNames@@YAHPEBG0@Z @ 0x18005BF14 (-CompareAnimationNames@@YAHPEBG0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPropertySet::Api::TryGetScalar(
        Windows::UI::Composition::CompositionPropertySet::Api *this,
        HSTRING a2,
        float *a3,
        enum Windows::UI::Composition::CompositionGetValueStatus *a4)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // r14d
  unsigned int v9; // esi
  HSTRING v10; // rcx
  const unsigned __int16 *v11; // r12
  const unsigned __int16 *StringRawBuffer; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  *a3 = 0.0;
  *(_DWORD *)a4 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    if ( a2 )
    {
      v8 = 0;
      v9 = 0;
      if ( *((_DWORD *)this + 16) )
      {
        while ( 1 )
        {
          v10 = *(HSTRING *)(*((_QWORD *)this + 5) + 8LL * v9);
          v11 = v10 ? WindowsGetStringRawBuffer(v10, 0LL) : 0LL;
          StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
          if ( !(unsigned int)CompareAnimationNames(v11, StringRawBuffer) )
            break;
          if ( ++v9 >= *((_DWORD *)this + 16) )
            goto LABEL_11;
        }
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                 (char *)this + 72,
                                 v9) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( *(_DWORD *)(*v16 + 8LL * v9) == 18 )
        {
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v15,
                                   v14) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v18,
                                   v17) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          *a3 = *(float *)((*(_DWORD *)(v20 + 8LL * v9 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v19 + 32));
        }
        else
        {
          v8 = 1;
        }
      }
      else
      {
LABEL_11:
        v8 = 2;
      }
      *(_DWORD *)a4 = v8;
    }
    else
    {
      v4 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x1AEu);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v4;
}
