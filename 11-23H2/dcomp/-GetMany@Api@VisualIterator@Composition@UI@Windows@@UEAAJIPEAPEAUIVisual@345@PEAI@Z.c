/*
 * XREFs of ?GetMany@Api@VisualIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z @ 0x1801A2FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     ?EnsureValidState@VisualIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801A2F98 (-EnsureValidState@VisualIterator@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIterator::Api::GetMany(
        Windows::UI::Composition::VisualIterator::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::IVisual **a3,
        unsigned int *a4)
{
  Microsoft::WRL2::NestableRuntimeClass **v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v9; // edi
  int valid; // eax
  Microsoft::WRL2::NestableRuntimeClass **v11; // r15
  Microsoft::WRL2::NestableRuntimeClass *v12; // rdi
  unsigned int v13; // esi
  struct Windows::UI::Composition::IVisual *v14; // rax
  struct Windows::UI::Composition::IVisual *v16; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0;
  v4 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this - 40);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( ((_BYTE)v4[4] & 2) != 0 )
  {
    valid = Windows::UI::Composition::VisualIterator::EnsureValidState((Windows::UI::Composition::VisualIterator *)v4);
    v9 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0xCAu);
    }
    else
    {
      v11 = v4 + 8;
      v12 = v4[8];
      if ( v12 )
      {
        v13 = 0;
        *a4 = a2;
        if ( a2 )
        {
          v16 = 0LL;
          while ( 1 )
          {
            Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(v12, (__int64 *)&v16);
            v14 = v16;
            v16 = 0LL;
            *a3 = v14;
            ++v13;
            v12 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)v12 + 19);
            if ( !v12 )
              break;
            ++a3;
            if ( v13 >= a2 )
              goto LABEL_11;
          }
          *a4 = v13;
        }
      }
LABEL_11:
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v11, (volatile signed __int32 *)v12);
      v9 = 0;
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v9;
}
