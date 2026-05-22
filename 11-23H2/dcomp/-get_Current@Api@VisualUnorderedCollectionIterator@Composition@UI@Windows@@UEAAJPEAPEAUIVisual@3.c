/*
 * XREFs of ?get_Current@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x1801A3BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureValidState@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801A3888 (-EnsureValidState@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::Api::get_Current(
        Windows::UI::Composition::VisualUnorderedCollectionIterator::Api *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  Windows::UI::Composition::VisualUnorderedCollectionIterator *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int valid; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct Windows::UI::Composition::IVisual *v10; // [rsp+50h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::VisualUnorderedCollectionIterator::Api *)((char *)this - 40);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::VisualUnorderedCollectionIterator::EnsureValidState(v2);
    v5 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0x6Eu);
    }
    else
    {
      v7 = *((_QWORD *)v2 + 7);
      v8 = *((unsigned int *)v2 + 19);
      if ( (unsigned int)v8 < *(_DWORD *)(v7 + 24) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, Microsoft::WRL2::NestableRuntimeClass **))(**((_QWORD **)v2 + 8) + 64LL))(
          *((_QWORD *)v2 + 8),
          v7,
          v8,
          &v11);
        v10 = 0LL;
        Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(v11, (__int64 *)&v10);
        *a2 = v10;
      }
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
