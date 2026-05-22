/*
 * XREFs of ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ @ 0x1800FCD20
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x1800FCC78 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemp.c)
 */

void __fastcall CTelemetryHelper::LogTelemetryLocked(CTelemetryHelper *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r8
  int v9; // eax
  _QWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  char *v13; // rsi
  __int64 v14; // r8
  char i; // dl
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 j; // rbx
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  __int16 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  int v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h] BYREF
  int v30; // [rsp+70h] [rbp-10h]
  unsigned int v31; // [rsp+74h] [rbp-Ch]
  unsigned int v32; // [rsp+78h] [rbp-8h]
  int v33; // [rsp+B0h] [rbp+30h] BYREF

  v3 = *((_DWORD *)this + 14);
  if ( v3 )
  {
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v5 = 0xFFFF;
    if ( v3 < 0xFFFF )
      v5 = v3;
    LOBYTE(v33) = v5;
    v29 = 0LL;
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 1u, a3, &v33);
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0xC0u);
    v7 = v32;
    LOBYTE(v33) = BYTE1(v5);
    v8 = v32 + 1;
    if ( (unsigned int)v8 >= v32 )
    {
      if ( (unsigned int)v8 > v31 )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 1u, v8, &v33);
        if ( v9 < 0 )
          DoStackCaptureDirect(v9, 0xC0u);
        v7 = v32;
      }
      else
      {
        *(_BYTE *)(v32 + (_QWORD)v29) = BYTE1(v5);
        v7 = v8;
        v32 = v8;
      }
    }
    else
    {
      DoStackCaptureDirect(-2147024362, 0xB5u);
    }
    v10 = (_QWORD *)((char *)this + 32);
    v11 = 0LL;
    v12 = v5;
    do
    {
      v13 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + *v10) + 16LL))(*(_QWORD *)(v11 + *v10));
      for ( i = *v13; i; i = *v13 )
      {
        v14 = v7 + 1;
        LOBYTE(v33) = i;
        if ( (unsigned int)v14 >= v7 )
        {
          if ( (unsigned int)v14 > v31 )
          {
            v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 1u, v14, &v33);
            if ( v17 < 0 )
              DoStackCaptureDirect(v17, 0xC0u);
            v7 = v32;
          }
          else
          {
            v16 = v7++;
            v32 = v14;
            *(_BYTE *)(v16 + v29) = i;
          }
        }
        else
        {
          DoStackCaptureDirect(-2147024362, 0xB5u);
        }
        ++v13;
      }
      LOBYTE(v33) = 0;
      v18 = v7 + 1;
      if ( v7 + 1 >= v7 )
      {
        if ( v18 > v31 )
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 1u, v14, &v33);
          if ( v20 < 0 )
            DoStackCaptureDirect(v20, 0xC0u);
          v7 = v32;
        }
        else
        {
          v19 = v7++;
          v32 = v18;
          *(_BYTE *)(v19 + v29) = 0;
        }
      }
      else
      {
        DoStackCaptureDirect(-2147024362, 0xB5u);
      }
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
    if ( (unsigned int)dword_1802191B0 > 5 && tlgKeywordOn((__int64)&dword_1802191B0, 0x400000000000LL) )
    {
      v25 = *((_QWORD *)this + 8);
      v26 = *((_WORD *)this + 44);
      v27 = v29;
      v28 = (unsigned __int16)v32;
      v33 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperArray<4>>(
        v21,
        byte_1801F2129,
        v22,
        v23,
        (__int64)&v33,
        &v27,
        &v25);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 14); j = (unsigned int)(j + 1) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v10 + 8 * j) + 8LL))(*(_QWORD *)(*v10 + 8 * j));
    *((_DWORD *)this + 14) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 4u);
    *((_BYTE *)this + 8) = 0;
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v29);
  }
}
