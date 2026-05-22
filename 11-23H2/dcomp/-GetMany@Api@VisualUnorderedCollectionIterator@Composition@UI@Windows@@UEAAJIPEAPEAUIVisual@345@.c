/*
 * XREFs of ?GetMany@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z @ 0x1801A3930
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

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollectionIterator::Api::GetMany(
        Windows::UI::Composition::VisualUnorderedCollectionIterator::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::IVisual **a3,
        unsigned int *a4)
{
  Windows::UI::Composition::VisualUnorderedCollectionIterator *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v9; // edi
  int valid; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  struct Windows::UI::Composition::IVisual *v13; // rax
  struct Windows::UI::Composition::IVisual *v15; // [rsp+60h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0;
  v4 = (Windows::UI::Composition::VisualUnorderedCollectionIterator::Api *)((char *)this - 40);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    if ( *((_DWORD *)v4 + 19) < *(_DWORD *)(*((_QWORD *)v4 + 7) + 24LL) )
    {
      valid = Windows::UI::Composition::VisualUnorderedCollectionIterator::EnsureValidState(v4);
      v9 = valid;
      if ( valid < 0 )
      {
        DoStackCaptureDirect(valid, 0xE1u);
        goto LABEL_10;
      }
      v11 = *((_QWORD *)v4 + 8);
      v16 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, Microsoft::WRL2::NestableRuntimeClass **))(*(_QWORD *)v11 + 64LL))(
        v11,
        *((_QWORD *)v4 + 7),
        *((unsigned int *)v4 + 19),
        &v16);
      v12 = 0;
      *a4 = a2;
      if ( a2 )
      {
        v15 = 0LL;
        while ( 1 )
        {
          Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(v16, (__int64 *)&v15);
          v13 = v15;
          v15 = 0LL;
          *a3 = v13;
          ++*((_DWORD *)v4 + 19);
          ++v12;
          if ( *((_DWORD *)v4 + 19) >= *(_DWORD *)(*((_QWORD *)v4 + 7) + 24LL) )
            break;
          ++a3;
          if ( v12 >= a2 )
            goto LABEL_9;
        }
        *a4 = v12;
      }
    }
LABEL_9:
    v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
