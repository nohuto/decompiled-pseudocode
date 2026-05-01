/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x18010D800
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010D6A4 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = a2[1];
  a1[4] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = a2 + 3;
  a1[5] = 0LL;
  if ( a1 + 5 != v4 )
  {
    a1[5] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1807AF5A8;
  return a1;
}
