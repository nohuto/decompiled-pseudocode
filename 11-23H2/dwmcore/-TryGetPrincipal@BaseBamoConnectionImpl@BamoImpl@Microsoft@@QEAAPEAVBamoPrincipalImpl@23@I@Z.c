/*
 * XREFs of ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800D6080
 * Callers:
 *     ?Thunk_AckProxyReference_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800D4900 (-Thunk_AckProxyReference_17@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovide.c)
 *     ?MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801B9B28 (-MarkPrincipalReadyOnPropertiesRefreshed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBas.c)
 *     ?RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801BA53C (-RequestDisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_AckProxyReference_37@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801BB1A0 (-Thunk_AckProxyReference_37@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diag.c)
 *     ?Thunk_ClearPrincipalReady_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801BB340 (-Thunk_ClearPrincipalReady_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Di.c)
 *     ?Thunk_ProxyDisposed_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801BB640 (-Thunk_ProxyDisposed_34@-$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@Diagnost.c)
 * Callees:
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800D6614 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

struct Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  _DWORD *i; // rax
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax

  for ( i = (_DWORD *)*((_QWORD *)this + 24); i != *((_DWORD **)this + 25); ++i )
  {
    if ( *i == a2 )
      return 0LL;
  }
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(this, *((_DWORD *)this + 7), a2);
  if ( Item )
    return (struct Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 40LL))(Item);
  return 0LL;
}
