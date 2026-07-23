/*
 * XREFs of MiLogBadMapper @ 0x140631348
 * Callers:
 *     MiShowBadMapper @ 0x14063160C (MiShowBadMapper.c)
 *     MmRegisterEtwProvider @ 0x140B4D698 (MmRegisterEtwProvider.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall MiLogBadMapper(__int64 a1, int a2, EVENT_DESCRIPTOR *a3)
{
  void (__fastcall *v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rax
  EVENT_DESCRIPTOR *p_EventDescriptor_8; // rbx
  bool v7; // cc
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // r10
  unsigned __int8 v12; // r9
  char *v13; // rdx
  char v14; // al
  char v17; // al
  char v18; // r8
  char v19; // cl
  __int64 v20; // rax
  int v22; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+30h] [rbp-D8h]
  int EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  __int64 *v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B4h] [rbp-54h]
  __int64 *p_EventDescriptor; // [rsp+B8h] [rbp-50h]
  int v38; // [rsp+C0h] [rbp-48h]
  int v39; // [rsp+C4h] [rbp-44h]
  int *v40; // [rsp+C8h] [rbp-40h]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  _DWORD *v43; // [rsp+D8h] [rbp-30h]
  int v44; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E4h] [rbp-24h]
  unsigned __int64 Keyword; // [rsp+E8h] [rbp-20h]
  _DWORD v47[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v48; // [rsp+F8h] [rbp-10h]
  int v49; // [rsp+100h] [rbp-8h]
  int v50; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v3 = (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))&retaddr;
  p_EventDescriptor_8 = &EventDescriptor_8;
  if ( a3 )
    p_EventDescriptor_8 = a3;
  v7 = **(_DWORD **)&qword_140C698E8 <= 5u;
  EventDescriptor_8 = 0LL;
  if ( !v7 )
  {
    LOBYTE(v3) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 128LL);
    if ( (_BYTE)v3 )
    {
      v36 = 0;
      v39 = 0;
      v34 = &v26;
      v26 = a1;
      p_EventDescriptor = (__int64 *)&EventDescriptor;
      v35 = 8;
      EventDescriptor = a2;
      v38 = 4;
      LOBYTE(v3) = tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&dword_140038774, v8, 1u, v22, v23, 4u, &UserData);
    }
  }
  if ( **(_DWORD **)&qword_140C698E8 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000080LL);
    if ( (_BYTE)v3 )
    {
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v47[1] = 0;
      v50 = 0;
      v34 = &v27;
      p_EventDescriptor = &v28;
      v40 = &EventDescriptor;
      v43 = v47;
      Keyword = p_EventDescriptor_8->Keyword;
      v47[0] = p_EventDescriptor_8->Id;
      v29 = 2164260864LL;
      v48 = &v29;
      UserData.Ptr = *(_QWORD *)(v11 + 8);
      v27 = a1;
      v28 = a1;
      v35 = 8;
      v38 = 8;
      EventDescriptor = a2;
      v41 = 4;
      v44 = 2;
      v49 = 8;
      *(_QWORD *)&EventDescriptor_8.Id = 0x50B000000LL;
      EventDescriptor_8.Keyword = v10;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v31 = &word_1400387BE;
      UserData.Reserved = 2;
      v32 = 121;
      v33 = 1;
      LODWORD(v26) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v3 = TlgAggregateInternalRegisteredProviderEtwCallback;
      if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(v11 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v12 = 0;
        v13 = (char *)&unk_1400387C0;
        do
          v14 = *v13++;
        while ( v14 < 0 );
        while ( *v13++ )
          ;
        while ( v13 < &byte_140038837 )
        {
          while ( *v13++ )
            ;
          if ( *v13 >= 0 )
            break;
          v17 = v13[1];
          v18 = *v13 & 0x7F;
          v13 += 2;
          if ( v17 >= 0 )
            break;
          while ( 1 )
          {
            v19 = *v13;
            if ( *v13 >= 0 )
              break;
            if ( v19 != (char)0x80 )
              goto LABEL_24;
            ++v13;
          }
          if ( v18 != 9 || (unsigned __int8)(v19 - 113) > 2u )
            break;
          v20 = 2LL * v12++;
          *((_BYTE *)&v36 + 8 * v20 + 1) = v19;
        }
LABEL_24:
        if ( v12 )
          LOBYTE(v3) = InsertEventEntryInLookUpTable(v11, (__int64)&EventDescriptor_8, 8, (__int64)&UserData, v12);
        else
          LOBYTE(v3) = EtwWriteEx(*(_QWORD *)(v11 + 32), &EventDescriptor_8, 0LL, 0, 0LL, 0LL, 8u, &UserData);
      }
    }
  }
  return (char)v3;
}
