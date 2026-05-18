/*
 * XREFs of DwmpUpdateUserSettings @ 0x1800093A0
 * Callers:
 *     DwmpNotifyUserLogon @ 0x180008700 (DwmpNotifyUserLogon.c)
 * Callees:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000994C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 */

int __fastcall DwmpUpdateUserSettings(CApiPortClient *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+24h] [rbp-24h]
  __int64 v7; // [rsp+2Ch] [rbp-1Ch]
  __int64 v8; // [rsp+34h] [rbp-14h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v5 = 536870914;
  v6 = a2;
  v9 = (int)a1;
  v7 = a3;
  v8 = a4;
  return CApiPortClient::SendNotification(a1, &v5, a3);
}
