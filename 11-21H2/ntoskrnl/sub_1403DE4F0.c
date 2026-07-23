/*
 * XREFs of sub_1403DE4F0 @ 0x1403DE4F0
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140545C94 @ 0x140545C94 (sub_140545C94.c)
 *     sub_14054A344 @ 0x14054A344 (sub_14054A344.c)
 *     sub_14054B350 @ 0x14054B350 (sub_14054B350.c)
 *     sub_14054B43C @ 0x14054B43C (sub_14054B43C.c)
 *     sub_14054B670 @ 0x14054B670 (sub_14054B670.c)
 *     sub_14054B7B4 @ 0x14054B7B4 (sub_14054B7B4.c)
 *     sub_14054B7FC @ 0x14054B7FC (sub_14054B7FC.c)
 *     sub_14054BA84 @ 0x14054BA84 (sub_14054BA84.c)
 *     sub_14054BAFC @ 0x14054BAFC (sub_14054BAFC.c)
 *     sub_14054BC60 @ 0x14054BC60 (sub_14054BC60.c)
 *     sub_14054BE48 @ 0x14054BE48 (sub_14054BE48.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     sub_140931064 @ 0x140931064 (sub_140931064.c)
 *     sub_140B4E6A0 @ 0x140B4E6A0 (sub_140B4E6A0.c)
 */

NTSTATUS __fastcall sub_1403DE4F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rcx
  __int64 v23; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v25[6]; // [rsp+30h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+C0h] [rbp+67h] BYREF

  v2 = *(_QWORD **)(a1 + 240);
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = v2[316];
  v4 = v2[317];
  v5 = v2[318];
  v6 = v2[319];
  v7 = v2[320];
  if ( v3 )
  {
    sub_14054B7B4(a1, a2);
    v25[0] = v3;
    v25[1] = v4;
    v25[2] = v5;
    v25[3] = v6;
    v25[4] = v7;
    sub_14054BA84(v25);
    EtwUnregister(qword_140C4E8C8);
    qword_140C4E8C8 = 0LL;
  }
  if ( !byte_140D0688B )
    return 0;
  if ( (dword_140D0688C & 2) == 0 )
    goto LABEL_12;
  sub_140B4E6A0(a1, a2);
  dword_140D06AD4 = sub_140545C94(v10, v9);
  if ( dword_140D06AD4 == 4 )
    byte_140D069E4 = 1;
  if ( !byte_140D069E4
    || (result = sub_14054B43C(a1, a2), a2 = 0x80000000LL, a1 = result + 0x80000000, (int)a1 < 0)
    || result == -1073741637 )
  {
LABEL_12:
    sub_14054B350(a1, a2);
    if ( (dword_140D068B8 & 1) == 0 )
    {
LABEL_21:
      v23 = qword_140C158B8;
      if ( qword_140C158B8 )
        sub_140232788(qword_140C158B8, 0LL, 0, 0LL);
      sub_14054A344(v23, v11);
      return 0;
    }
    sub_14054B7B4(v12, v11);
    sub_14054BF10(&stru_140014F50, 0, 0LL);
    sub_14054BAFC(v14, v13);
    sub_14054B670(v16, v15);
    sub_14054BC60(v18, v17);
    sub_14054B7FC(v20, v19);
    if ( (unsigned int)NumOfElements < 0x400 )
    {
      v22 = &dword_140D125E0[30 * (unsigned int)NumOfElements];
      if ( !*v22 )
      {
        if ( *((_WORD *)v22 + 28) )
          sub_14054BE48((unsigned int)v22[2], *((unsigned __int16 *)v22 + 28));
      }
    }
    sub_140931064(v22, v21);
    if ( byte_140D068BF )
      sub_14054BF10(&stru_140014F60, 0, 0LL);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    CallbackObject = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
    {
      ExRegisterCallback(CallbackObject, CallbackFunction, 0LL);
      goto LABEL_21;
    }
  }
  return result;
}
