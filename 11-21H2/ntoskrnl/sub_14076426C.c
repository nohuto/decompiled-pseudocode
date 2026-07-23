/*
 * XREFs of sub_14076426C @ 0x14076426C
 * Callers:
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_1406DBB10 @ 0x1406DBB10 (sub_1406DBB10.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140763500 @ 0x140763500 (sub_140763500.c)
 *     sub_1407645E0 @ 0x1407645E0 (sub_1407645E0.c)
 *     sub_140764604 @ 0x140764604 (sub_140764604.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_140787558 @ 0x140787558 (sub_140787558.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14076426C(_QWORD *Object)
{
  __int64 v2; // r14
  unsigned __int16 *v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // ebx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 *i; // rsi
  __int64 v18; // rcx
  __int64 v19; // r12
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  struct _DEVICE_OBJECT *v26; // r15
  __int64 v27; // rcx
  int v28; // eax
  char v29; // bl
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD **v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Objecta; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceString; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  _QWORD DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-58h]
  __int128 v42; // [rsp+C0h] [rbp-48h]
  GUID InterfaceClassGuid; // [rsp+D0h] [rbp-38h] BYREF
  WCHAR v44[264]; // [rsp+E8h] [rbp-20h] BYREF

  v32 = &v31;
  v31 = &v31;
  InterfaceClassGuid = 0LL;
  v2 = 0LL;
  v40 = 0LL;
  v3 = 0LL;
  v37 = 0LL;
  v41 = 0LL;
  v30 = 0LL;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v33) = 0;
  DestinationString[0] = 0LL;
  v36 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  *(_OWORD *)&DestinationString[1] = 0LL;
  Objecta = 0LL;
  UnicodeString = 0LL;
  ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
  v7 = (__int64 *)Object[8];
  v8 = *v7;
  if ( *v7 )
  {
    *((_DWORD *)v7 + 2) &= 0xFFFFFFF9;
    v9 = Object[39];
    v3 = (unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 40LL);
    if ( (byte_140C0DD4C & 2) != 0 )
      sub_140563B98(
        v5,
        (const EVENT_DESCRIPTOR *)qword_14003B0A0,
        v6,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        *(const wchar_t **)(*(_QWORD *)(v9 + 40) + 48LL));
    v10 = *(void **)(v8 + 80);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x57706E50u);
      *(_OWORD *)(v8 + 72) = 0LL;
    }
    v11 = *((_QWORD *)v3 + 1);
    v12 = ((unsigned __int64)*v3 >> 1) + 1;
    SourceString = 0LL;
    v13 = sub_14077DE70(v11, v12, 1466986064LL, &SourceString);
    if ( v13 >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v8 + 72), SourceString);
      *(_DWORD *)(v8 + 4) |= 4u;
      if ( !*(_QWORD *)(v8 + 88) )
      {
        v15 = *(_QWORD *)(v8 + 144);
        if ( !v15
          || !_InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL)
          || (v2 = *(_QWORD *)(v8 + 144), *(_QWORD *)(v8 + 144) = 0LL, !v2)
          || (v13 = sub_1402E0978(
                      *(_WORD **)(v2 + 24),
                      *(unsigned int *)(*(_QWORD *)(v2 + 184) + 8LL),
                      *(_QWORD *)(v8 + 80)),
              v13 >= 0)
          && (v13 = sub_1402DCD64(*(_WORD **)(v2 + 24), *(unsigned int *)(v16 + 8), DestinationString), v13 >= 0) )
        {
          HIDWORD(v30) = *(_DWORD *)(v8 + 164);
          v41 = 0x19uLL;
          *((_QWORD *)&v42 + 1) = (char *)&v30 + 4;
          v40 = xmmword_140015F58;
          *(_QWORD *)&v42 = 0x400000007LL;
          v13 = sub_140764604(*(_DWORD *)(v8 + 176), *(_QWORD *)(v8 + 168), v14, (unsigned int)&v30, (__int64)&v37);
          if ( v13 >= 0 )
          {
            for ( i = *(__int64 **)(v8 + 184); i != (__int64 *)(v8 + 184); i = (__int64 *)*i )
            {
              v13 = sub_140763500(i[2], i[3], *((_DWORD *)i + 8), (PVOID *)&v36);
              if ( v13 < 0 )
                goto LABEL_17;
              v24 = v32;
              if ( *v32 != &v31 )
                __fastfail(3u);
              v25 = v36;
              *v36 = &v31;
              v25[1] = v24;
              *v24 = v25;
              v32 = (_QWORD **)v25;
            }
            Objecta = Object;
            ObfReferenceObject(Object);
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_17:
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
  v19 = v37;
  if ( v13 >= 0 )
  {
    if ( !*((_QWORD *)&v42 + 1) || (v13 = sub_14076E714(*((_QWORD *)v3 + 1), 1LL, &v40, 1LL), v13 >= 0) )
    {
      if ( !v19 || (v13 = sub_14076E714(*((_QWORD *)v3 + 1), 1LL, v19, (unsigned int)v30), v13 >= 0) )
      {
        v20 = v31;
        if ( v31 != &v31 )
        {
          v26 = (struct _DEVICE_OBJECT *)Objecta;
          do
          {
            v13 = sub_140787558(v18, v20[2], &InterfaceClassGuid);
            if ( v13 < 0 )
              break;
            v28 = sub_1406DBB10(v27, v20[2], v44, 0x104u, &v33);
            v13 = v28;
            if ( v28 == -1073741772 )
            {
              v29 = 0;
            }
            else
            {
              if ( v28 < 0 )
                break;
              v29 = 1;
              RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v44);
            }
            v13 = IoRegisterDeviceInterface(
                    v26,
                    &InterfaceClassGuid,
                    (PUNICODE_STRING)((unsigned __int64)&DestinationString[1] & -(__int64)(v29 != 0)),
                    &UnicodeString);
            if ( v13 < 0 )
              break;
            v13 = sub_14076E714(v20[2], 3LL, v20[3], *((unsigned int *)v20 + 8));
            if ( v13 < 0 )
              break;
            v20 = (_QWORD *)*v20;
          }
          while ( v20 != &v31 );
        }
      }
    }
  }
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  if ( v19 )
    sub_140779620((unsigned int)v30, v19, 1466986064LL);
  sub_1407645E0(&v31);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v2 )
  {
    if ( v13 < 0 )
      v23 = 0LL;
    else
      v23 = DestinationString[0] + 2LL;
    *(_QWORD *)(v2 + 56) = v23;
    *(_DWORD *)(v2 + 48) = v13;
    IofCompleteRequest((PIRP)v2, 0);
  }
  if ( v8 )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      sub_1405637DC(
        v21,
        (const EVENT_DESCRIPTOR *)qword_14003B3C0,
        v22,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        v13);
  }
}
