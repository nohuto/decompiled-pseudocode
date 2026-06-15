/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800E7328
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E8700 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D789C (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v6; // rsi
  bool v8; // bp
  _QWORD *result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v6, &v11) >= 0 && v11 )
      {
        v10 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v11, &v10) >= 0 )
        {
          v8 = v10 == *a4;
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v10);
          goto LABEL_8;
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v10);
      }
      v8 = 0;
LABEL_8:
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v11);
      if ( !v8 && ++v6 != a3 )
        continue;
      break;
    }
  }
  result = a1;
  *a1 = v6;
  return result;
}
