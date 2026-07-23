/*
 * XREFs of sub_140983EF0 @ 0x140983EF0
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_1406B96E8 @ 0x1406B96E8 (sub_1406B96E8.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_140983EC0 @ 0x140983EC0 (sub_140983EC0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B52C84 @ 0x140B52C84 (sub_140B52C84.c)
 */

LONG_PTR __fastcall sub_140983EF0(PVOID *a1, char *a2, __int64 a3, char *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  __int64 HostSilo; // rax
  volatile __int64 *v8; // rax
  char *v10; // rsi
  char *v11; // r15
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // rax
  char *v15; // rdi
  char *v16; // r13
  char *v17; // r11
  char *v18; // r10
  struct _OBJECT_TYPE *v19; // rax
  char v20; // cl
  __int64 v21; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v23; // rcx
  struct _OBJECT_TYPE *v24; // rbx
  __int64 v25; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  int v27; // [rsp+B0h] [rbp+48h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+50h] BYREF
  char *v29; // [rsp+C0h] [rbp+58h]
  struct _OBJECT_TYPE *v30; // [rsp+C8h] [rbp+60h]

  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v27 = 0;
      return ExEnumHandleTable(*((_QWORD *)PsInitialSystemProcess + 174), (__int64)sub_140984330, (__int64)&v27, 0LL);
    }
    else
    {
      v4 = qword_140C246D8;
      Object = 0LL;
      DestinationString = 0LL;
      v5 = *(_QWORD **)qword_140C246D8;
      while ( v5 != v4 )
      {
        v6 = v5 + 10;
        v5 = (_QWORD *)*v5;
        Object = v6;
        ObMakeTemporaryObject(v6);
      }
      RtlInitUnicodeString(&DestinationString, L"DosDevices");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64LL,
                  0LL,
                  0,
                  (__int64)qword_140C24FC0,
                  0,
                  0LL,
                  (__int64 *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"Global");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64LL,
                  0LL,
                  0,
                  (__int64)qword_140C24FC0,
                  0,
                  0LL,
                  (__int64 *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64LL,
                  0LL,
                  0,
                  (__int64)qword_140C24FC0,
                  0,
                  0LL,
                  (__int64 *)&Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      HostSilo = PsGetHostSilo();
      v8 = (volatile __int64 *)sub_140204738(HostSilo);
      sub_140983EC0(v8);
      ObfDereferenceObject(qword_140C246D0);
      ObfDereferenceObject(qword_140C24FB8);
      ObfDereferenceObject(qword_140C24FC0);
      ObfDereferenceObject(qword_140C24F00);
      return ObfDereferenceObject(qword_140C246D8);
    }
  }
  else
  {
    v10 = (char *)qword_140C246D0;
    v27 = 1;
    v11 = 0LL;
    v12 = 1;
    v13 = 1;
    if ( qword_140C246D0 )
    {
LABEL_15:
      while ( 2 )
      {
        v14 = 0LL;
LABEL_16:
        LODWORD(Object) = v14;
        if ( (unsigned int)v14 < 0x25 )
        {
          a4 = &v10[8 * v14];
          a2 = *(char **)a4;
          v15 = a4;
          v29 = a4;
          while ( 1 )
          {
            if ( !a2 )
            {
              v14 = (unsigned int)((_DWORD)Object + 1);
              goto LABEL_16;
            }
            v16 = (char *)*((_QWORD *)a2 + 1);
            v17 = v11;
            v18 = v11;
            v19 = (struct _OBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)];
            v20 = *(v16 - 22);
            v30 = v19;
            if ( (v20 & 2) != 0 )
            {
              v21 = (__int64)&v16[-byte_140C25440[v20 & 3] - 48];
              v19 = v30;
            }
            else
            {
              v21 = 0LL;
            }
            if ( v11 )
            {
              if ( v16 == v11 && (v11 = 0LL, v13 > v12) )
              {
                v13 = v12;
                v15 = a4;
                v27 = v12;
              }
              else
              {
                v11 = 0LL;
                v15 = a2;
                if ( v16 != v18 )
                  v11 = v17;
              }
            }
            else if ( v19 == qword_140C246D8 )
            {
              v15 = a2;
            }
            else
            {
              if ( v19 == qword_140C24FB8 )
              {
                ++v12;
                v10 = v16;
                goto LABEL_15;
              }
              CurrentThread = KeGetCurrentThread();
              --*((_WORD *)CurrentThread + 242);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 - 32), 0LL);
              *(v16 - 21) &= ~0x10u;
              ExReleasePushLockEx((ULONG_PTR)(v16 - 32), 0LL);
              sub_1402F9540((__int64)KeGetCurrentThread());
              v23 = *(char **)v15;
              if ( *((_QWORD *)v16 - 5) )
              {
                v13 = v27;
                v15 = *(char **)v15;
              }
              else
              {
                *(_QWORD *)v15 = *(_QWORD *)v23;
                ExFreePoolWithTag(v23, 0);
                v24 = v30;
                if ( (*((_BYTE *)v30 + 66) & 8) == 0 )
                {
                  v25 = 0LL;
                  sub_14042A5E0(v16, 2LL);
                }
                if ( v24 == qword_140C24FC0 )
                {
                  v13 = v12;
                  v27 = v12;
                  sub_1406B96E8((__int64)v16);
                  v15 = v29;
                }
                else
                {
                  v13 = v27;
                }
                ExFreePoolWithTag(*(PVOID *)(v21 + 16), 0);
                *(_QWORD *)(v21 + 16) = 0LL;
                *(_DWORD *)(v21 + 8) = 0;
                *(_QWORD *)v21 = 0LL;
                ObfDereferenceObject(v16);
                ObfDereferenceObject(v10);
              }
              a4 = v29;
            }
            a2 = *(char **)v15;
          }
        }
        --v12;
        if ( (*(v10 - 22) & 2) != 0 )
          a1 = (PVOID *)&v10[-byte_140C25440[*(v10 - 22) & 3] - 48];
        else
          a1 = 0LL;
        v11 = v10;
        v10 = (char *)*a1;
        if ( *a1 )
          continue;
        break;
      }
    }
    return sub_140B52C84(a1, a2, a3, a4, v25);
  }
}
