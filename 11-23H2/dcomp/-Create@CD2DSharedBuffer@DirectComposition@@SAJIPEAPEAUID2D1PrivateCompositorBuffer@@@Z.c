/*
 * XREFs of ?Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800ECD10
 * Callers:
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@DirectComposition@@@@YAXAEAPEAVCD2DSharedBuffer@DirectComposition@@@Z @ 0x1800ECC7C (--$ReleaseInterface@VCD2DSharedBuffer@DirectComposition@@@@YAXAEAPEAVCD2DSharedBuffer@DirectComp.c)
 */

__int64 __fastcall DirectComposition::CD2DSharedBuffer::Create(
        unsigned int a1,
        struct ID2D1PrivateCompositorBuffer **a2)
{
  _DWORD *v4; // rax
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  LPVOID v7; // rax
  volatile signed __int32 *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = DefaultHeap::AllocClear(0x20uLL);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v4[2] = 0;
    *(_QWORD *)v4 = &DirectComposition::CD2DSharedBuffer::`vftable';
    v4[6] = a1;
    v9 = v4;
    v7 = DefaultHeap::Alloc(a1);
    *((_QWORD *)v6 + 2) = v7;
    if ( v7 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v6 + 2));
      *a2 = (struct ID2D1PrivateCompositorBuffer *)v6;
      v9 = 0LL;
    }
    else
    {
      DoStackCaptureDirect(-2147024882, 0x2Eu);
      DoStackCaptureDirect(-2147024882, 0x1Au);
      v5 = -2147024882;
    }
  }
  else
  {
    v9 = 0LL;
    v5 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x19u);
  }
  ReleaseInterface<DirectComposition::CD2DSharedBuffer>(&v9);
  return v5;
}
