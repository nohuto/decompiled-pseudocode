/*
 * XREFs of ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z @ 0x180062568
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180064954 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180060888 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x180064B6C (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 */

void __fastcall CGdiSpriteBitmap::SetColorKey(CGdiSpriteBitmap *this, char a2, const struct CColorKey *a3)
{
  float *v4; // r9

  if ( a2 != *((_BYTE *)this + 146)
    || (CColorKey::IsNonEmpty((CGdiSpriteBitmap *)((char *)this + 352)) || CColorKey::IsNonEmpty(a3))
    && (*v4 != *(float *)a3
     || v4[1] != *((float *)a3 + 1)
     || v4[2] != *((float *)a3 + 2)
     || v4[3] != *((float *)a3 + 3)
     || v4[4] != *((float *)a3 + 4)
     || v4[5] != *((float *)a3 + 5)
     || v4[6] != *((float *)a3 + 6)
     || v4[7] != *((float *)a3 + 7)) )
  {
    *((_BYTE *)this + 146) = a2;
    *((_OWORD *)this + 22) = *(_OWORD *)a3;
    *((_OWORD *)this + 23) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 96) = *((_DWORD *)a3 + 8);
    if ( CGdiSpriteBitmap::ReleaseBitmapRealization(this) )
      CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
}
