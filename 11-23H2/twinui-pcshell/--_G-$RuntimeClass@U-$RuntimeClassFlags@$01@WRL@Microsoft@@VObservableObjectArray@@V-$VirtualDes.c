/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180565D30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ObservableObjectArray@@QEAA@XZ @ 0x1802E0B1C (--1ObservableObjectArray@@QEAA@XZ.c)
 */

ObservableObjectArray *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`scalar deleting destructor'(
        ObservableObjectArray *a1,
        char a2)
{
  *((_DWORD *)a1 + 39) = -1073741823;
  ObservableObjectArray::~ObservableObjectArray(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
