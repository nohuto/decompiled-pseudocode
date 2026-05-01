/*
 * XREFs of ??_EMessageProxyReconnectAdapter@@UEAAPEAXI@Z @ 0x1805E3860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1MessageProxyReconnectAdapter@@UEAA@XZ @ 0x1805E3804 (--1MessageProxyReconnectAdapter@@UEAA@XZ.c)
 */

MessageProxyReconnectAdapter *__fastcall MessageProxyReconnectAdapter::`vector deleting destructor'(
        MessageProxyReconnectAdapter *this,
        char a2)
{
  MessageProxyReconnectAdapter::~MessageProxyReconnectAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
