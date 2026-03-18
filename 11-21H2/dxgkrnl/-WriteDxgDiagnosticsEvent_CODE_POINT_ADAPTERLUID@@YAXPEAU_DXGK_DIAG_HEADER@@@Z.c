/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0012028
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00126E0 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU_tlgWrapperBinary@@@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C00011C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1C000126C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x1C00014CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C0012AE4 (-IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdx
  int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // r10
  int *v22; // [rsp+28h] [rbp-21h]
  int v23; // [rsp+60h] [rbp+17h] BYREF
  int v24; // [rsp+64h] [rbp+1Bh] BYREF
  __int64 v25; // [rsp+68h] [rbp+1Fh] BYREF
  struct _DXGK_DIAG_HEADER *v26; // [rsp+70h] [rbp+27h] BYREF
  __int16 v27; // [rsp+78h] [rbp+2Fh]
  int v28; // [rsp+B0h] [rbp+67h] BYREF
  int v29; // [rsp+B8h] [rbp+6Fh] BYREF
  int v30; // [rsp+C0h] [rbp+77h] BYREF
  int v31; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)IsCodePointTypeNoisy(*((unsigned int *)a1 + 12)) )
  {
    if ( (unsigned int)dword_1C012F8E0 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 16LL) && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v2) )
    {
      v6 = &unk_1C0098CF0;
      v27 = *((_WORD *)a1 + 2);
      v28 = *((_DWORD *)a1 + 15);
      v29 = *((_DWORD *)a1 + 14);
      v30 = *((_DWORD *)a1 + 13);
      v23 = *((_DWORD *)a1 + 10);
      v22 = &v23;
      v7 = &v24;
      v24 = 8;
LABEL_10:
      v26 = a1;
      v31 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v3,
        (int)v6,
        v4,
        v5,
        (__int64)v7,
        (__int64)v22,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64 *)&v26);
    }
  }
  else
  {
    if ( (unsigned int)dword_1C012F8E0 <= 4 )
      return;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 0x200000000010LL)
      && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v8) )
    {
      v6 = &unk_1C0098C96;
      v27 = *((_WORD *)a1 + 2);
      v28 = *((_DWORD *)a1 + 15);
      v29 = *((_DWORD *)a1 + 14);
      v30 = *((_DWORD *)a1 + 13);
      v24 = *((_DWORD *)a1 + 10);
      v22 = &v24;
      v7 = &v23;
      v23 = 8;
      goto LABEL_10;
    }
  }
  if ( (unsigned int)dword_1C012F8E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, 0x400000000010LL) )
  {
    v10 = *((_DWORD *)a1 + 12);
    switch ( v10 )
    {
      case 'D':
        if ( *((int *)a1 + 13) < 0 != ((*((_DWORD *)a1 + 13) & 0x40000000) != 0)
          && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v9) )
        {
          v29 = (unsigned __int8)v20;
          v30 = v21;
          v31 = *((_DWORD *)a1 + 15);
          v24 = *((_DWORD *)a1 + 14);
          LOBYTE(v28) = *((_BYTE *)a1 + 52);
          v26 = (struct _DXGK_DIAG_HEADER *)*((_QWORD *)a1 + 8);
          v23 = *((_DWORD *)a1 + 10);
          LODWORD(v25) = 8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v18,
            (int)&unk_1C0098AB4,
            v19,
            v20,
            (__int64)&v25,
            (__int64)&v23,
            (__int64)&v26,
            (__int64)&v28,
            (__int64)&v24,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29);
        }
        break;
      case 'X':
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v9) )
          return;
        v14 = &unk_1C0098C33;
        goto LABEL_27;
      case '`':
        if ( !(unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v9) )
          return;
        v14 = &unk_1C0098BC3;
        goto LABEL_27;
      case 'b':
        if ( *((int *)a1 + 14) < 0 && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v9) )
        {
          v29 = *((_DWORD *)a1 + 13);
          v25 = *((_QWORD *)a1 + 8);
          v30 = *((_DWORD *)a1 + 10);
          v28 = v17;
          v31 = 8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v15,
            (int)&unk_1C0098B45,
            v16,
            v17,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v25,
            (__int64)&v29,
            (__int64)&v28);
        }
        break;
      default:
        if ( v10 == 104 && (unsigned __int8)tlgKeywordOn(&dword_1C012F8E0, v9) )
        {
          v14 = &unk_1C0098A53;
LABEL_27:
          v28 = *((_DWORD *)a1 + 15);
          v29 = *((_DWORD *)a1 + 14);
          v30 = *((_DWORD *)a1 + 13);
          v25 = *((_QWORD *)a1 + 8);
          v31 = *((_DWORD *)a1 + 10);
          v24 = 8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v11,
            (int)v14,
            v12,
            v13,
            (__int64)&v24,
            (__int64)&v31,
            (__int64)&v25,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28);
        }
        break;
    }
  }
}
