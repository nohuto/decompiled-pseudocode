/*
 * XREFs of ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C
 * Callers:
 *     CreateFlipObject @ 0x1801AA080 (CreateFlipObject.c)
 *     ??1CFlipProducer@Flip@@EEAA@XZ @ 0x1801AA1E4 (--1CFlipProducer@Flip@@EEAA@XZ.c)
 *     ?Create@CFlipProducer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z @ 0x1801AA458 (-Create@CFlipProducer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z.c)
 *     ?GetPoolBufferAvailableEvent@CFlipProducer@Flip@@UEAAJPEAXPEAPEAX@Z @ 0x1801AA690 (-GetPoolBufferAvailableEvent@CFlipProducer@Flip@@UEAAJPEAXPEAPEAX@Z.c)
 *     ?IsConsumerConnected@CFlipProducer@Flip@@UEAAJPEA_N@Z @ 0x1801AA760 (-IsConsumerConnected@CFlipProducer@Flip@@UEAAJPEA_N@Z.c)
 *     ?Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z @ 0x1801AA7C0 (-Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z.c)
 *     ?PresentCancel@CFlipProducer@Flip@@UEAAJPEA_K@Z @ 0x1801AA960 (-PresentCancel@CFlipProducer@Flip@@UEAAJPEA_K@Z.c)
 *     ??1CFlipConsumer@Flip@@EEAA@XZ @ 0x1801AAB30 (--1CFlipConsumer@Flip@@EEAA@XZ.c)
 *     ?Create@CFlipConsumer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z @ 0x1801AAC6C (-Create@CFlipConsumer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z.c)
 *     ?DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z @ 0x1801AAD80 (-DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z.c)
 *     ?HoldPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@@Z @ 0x1801AB300 (-HoldPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?IsProducerConnected@CFlipConsumer@Flip@@UEAAJPEA_N@Z @ 0x1801AB3B0 (-IsProducerConnected@CFlipConsumer@Flip@@UEAAJPEA_N@Z.c)
 *     ?PostMessageToProducer@CFlipConsumer@Flip@@UEAAJIPEAUFlipPropertyItem@@@Z @ 0x1801AB410 (-PostMessageToProducer@CFlipConsumer@Flip@@UEAAJIPEAUFlipPropertyItem@@@Z.c)
 *     ?ProcessAddBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddBuffer@@@Z @ 0x1801AB438 (-ProcessAddBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpda.c)
 *     ?ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z @ 0x1801ABDB0 (-ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z.c)
 *     ?Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z @ 0x1801AC04C (-Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z.c)
 *     ?UpdateBufferAndProperties@CFlipContent@Flip@@UEAAJPEAXIPEAUFlipPropertyItem@@@Z @ 0x1801AC1A0 (-UpdateBufferAndProperties@CFlipContent@Flip@@UEAAJPEAXIPEAUFlipPropertyItem@@@Z.c)
 *     ?QueryBufferInfo@CSynchronizationContext@Flip@@QEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z @ 0x1801AC4F0 (-QueryBufferInfo@CSynchronizationContext@Flip@@QEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z.c)
 *     ?InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z @ 0x1801AC5FC (-InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z.c)
 *     ?RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z @ 0x1801AC720 (-RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z.c)
 *     ?Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z @ 0x1801AC948 (-Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z.c)
 *     ?CancelPresentsFrom@CPresentationManager@@UEAAJ_K@Z @ 0x1801AD2B0 (-CancelPresentsFrom@CPresentationManager@@UEAAJ_K@Z.c)
 *     ?EnablePresentStatisticsKind@CPresentationManager@@UEAAJW4PresentStatisticsKind@@E@Z @ 0x1801AD640 (-EnablePresentStatisticsKind@CPresentationManager@@UEAAJW4PresentStatisticsKind@@E@Z.c)
 *     ?Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z @ 0x1801ADD50 (-Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 *     ?Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z @ 0x1801AF3A8 (-Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z.c)
 *     ?Initialize@CPresentationSurface@@IEAAJPEAX@Z @ 0x1801AFF4C (-Initialize@CPresentationSurface@@IEAAJPEAX@Z.c)
 *     ?PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801B0070 (-PrePresent@CPresentationSurface@@UEAAJPEAPEAUIUnknown@@@Z.c)
 *     ?Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z @ 0x1801B092C (-Create@CSerializedConsumerMessage@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HRESULTFromNTSTATUS(int a1)
{
  if ( a1 > -1073741790 )
  {
    if ( a1 != -1073741788 )
    {
      if ( a1 != -1073741637 )
      {
        if ( !a1 )
          return 0;
        return (unsigned int)(a1 | 0x10000000);
      }
      return (unsigned int)-2147024809;
    }
    return (unsigned int)-2147024890;
  }
  switch ( a1 )
  {
    case -1073741790:
      return (unsigned int)-2147024891;
    case -1073741823:
      return (unsigned int)-2147467259;
    case -1073741822:
      return (unsigned int)-2147467263;
    case -1073741816:
      return (unsigned int)-2147024890;
    case -1073741811:
      return (unsigned int)-2147024809;
  }
  if ( a1 != -1073741801 )
    return (unsigned int)(a1 | 0x10000000);
  return (unsigned int)-2147024882;
}
