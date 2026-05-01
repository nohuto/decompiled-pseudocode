/*
 * XREFs of ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1802345D6
 * Callers:
 *     ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x1804B8090 (--_ESwitchItemThumbnailElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::~SwitchItemThumbnailElement(SwitchItemThumbnailElement *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 600);
  if ( *v2 )
    *(_QWORD *)(*v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 72);
  *((_DWORD *)this + 73) = -1073741823;
  CShrinkButtonElement::~CShrinkButtonElement(this);
}
