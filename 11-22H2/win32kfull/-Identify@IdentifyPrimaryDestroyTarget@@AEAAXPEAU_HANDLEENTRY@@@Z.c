/*
 * XREFs of ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C011B808
 * Callers:
 *     DestroySMWP @ 0x1C00A1B10 (DestroySMWP.c)
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C011B7D0 (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0122FB0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall IdentifyPrimaryDestroyTarget::Identify(Identify *this, struct _HANDLEENTRY *a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v6; // rax

  if ( !gbInDestroyHandleTableObjects )
  {
    v6 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(this, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v6) == 1 )
    {
      *(_BYTE *)this = gphePrimaryDestroyTarget == 0LL;
      if ( gphePrimaryDestroyTarget )
      {
        if ( a2 != gphePrimaryDestroyTarget )
          ++gcSecondaryDestroyTargets;
      }
      else
      {
        gphePrimaryDestroyTarget = a2;
      }
    }
  }
}
