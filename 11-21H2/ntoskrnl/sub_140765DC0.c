/*
 * XREFs of sub_140765DC0 @ 0x140765DC0
 * Callers:
 *     sub_140764EC8 @ 0x140764EC8 (sub_140764EC8.c)
 *     sub_140953B9C @ 0x140953B9C (sub_140953B9C.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_1405639AC @ 0x1405639AC (sub_1405639AC.c)
 *     sub_140563A9C @ 0x140563A9C (sub_140563A9C.c)
 *     sub_140563DCC @ 0x140563DCC (sub_140563DCC.c)
 *     sub_140661C18 @ 0x140661C18 (sub_140661C18.c)
 *     sub_140661CD8 @ 0x140661CD8 (sub_140661CD8.c)
 *     sub_1406E34FC @ 0x1406E34FC (sub_1406E34FC.c)
 *     sub_1407645E0 @ 0x1407645E0 (sub_1407645E0.c)
 *     sub_140764604 @ 0x140764604 (sub_140764604.c)
 *     sub_140764758 @ 0x140764758 (sub_140764758.c)
 *     sub_140764970 @ 0x140764970 (sub_140764970.c)
 *     sub_1407661D0 @ 0x1407661D0 (sub_1407661D0.c)
 *     sub_140767784 @ 0x140767784 (sub_140767784.c)
 *     sub_1407677F0 @ 0x1407677F0 (sub_1407677F0.c)
 *     sub_140767820 @ 0x140767820 (sub_140767820.c)
 *     sub_14076E714 @ 0x14076E714 (sub_14076E714.c)
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140953348 @ 0x140953348 (sub_140953348.c)
 *     sub_14095336C @ 0x14095336C (sub_14095336C.c)
 *     sub_14095353C @ 0x14095353C (sub_14095353C.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 *     sub_1409539A8 @ 0x1409539A8 (sub_1409539A8.c)
 *     sub_140953AB8 @ 0x140953AB8 (sub_140953AB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140765DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  struct _DEVICE_OBJECT *v3; // r14
  struct _DEVICE_OBJECT *v4; // r13
  char v5; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  PVOID *inserted; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  void *v15; // r11
  const wchar_t **v16; // rcx
  BOOLEAN v17; // bl
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // rax
  char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  void *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  void *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  void *v40; // rcx
  __int64 v41; // r8
  int CurrentThreadProcessId; // eax
  char *Buffer; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h] BYREF
  __int64 v45; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  BOOLEAN NewElement; // [rsp+C8h] [rbp+48h] BYREF
  int v48; // [rsp+D0h] [rbp+50h] BYREF
  PVOID P; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  v45 = 0LL;
  DestinationString = 0LL;
  v10 = sub_140767820();
  if ( v10 < 0 )
    goto LABEL_33;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140563DCC(
      v9,
      v8,
      v11,
      *(const wchar_t **)a1,
      *(const wchar_t **)(a1 + 16),
      *(const wchar_t **)(a1 + 8),
      *(_DWORD *)(a1 + 64),
      *(const wchar_t **)(a1 + 72),
      *(const wchar_t **)(a1 + 80),
      *(_DWORD *)(a1 + 104));
  sub_1407677F0();
  if ( a2 && (v2 = *(_QWORD *)(a2 + 184), *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL)) )
  {
    v10 = -1073741637;
  }
  else
  {
    v10 = sub_140767784(&Buffer);
    if ( v10 >= 0 )
    {
      v10 = sub_1407661D0(Buffer + 8, a1);
      if ( v10 >= 0 )
      {
        inserted = (PVOID *)RtlInsertElementGenericTableAvl(&stru_140C447A0, &Buffer, 8u, &NewElement);
        LOBYTE(v15) = 0;
        if ( !inserted )
          goto LABEL_96;
        v16 = (const wchar_t **)*inserted;
        v17 = NewElement;
        P = *inserted;
        if ( (byte_140C0DD4C & 2) != 0 )
        {
          sub_1405637DC((__int64)v16, (const EVENT_DESCRIPTOR *)qword_14003B1C0, v14, v16[1], v16[2], NewElement == 0);
          v16 = (const wchar_t **)P;
        }
        if ( v17 )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v16);
          v18 = sub_140764758((__int64)P + 24, a1);
          LOBYTE(v15) = 0;
          v10 = v18;
          if ( v18 < 0 )
            goto LABEL_97;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( !*(_QWORD *)(a1 + 96) )
            goto LABEL_14;
          v22 = sub_140953348(*(unsigned int *)(a1 + 88));
          LOBYTE(v15) = 0;
          *((_QWORD *)P + 19) = v22;
          v13 = (_QWORD *)*((_QWORD *)P + 19);
          if ( v13 )
          {
            memmove(v13, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
LABEL_14:
            v19 = sub_140764604(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v14, (_DWORD *)P + 44, (__int64 *)P + 21);
            LOBYTE(v15) = 0;
            v10 = v19;
            if ( v19 < 0 )
              goto LABEL_97;
            v20 = sub_140764970(*(const wchar_t **)(a1 + 8), (__int64)P, v14);
            LOBYTE(v15) = 0;
            v10 = v20;
            if ( v20 < 0 )
              goto LABEL_97;
            *((_DWORD *)P + 41) = PsGetCurrentThreadProcessId();
LABEL_17:
            v3 = (struct _DEVICE_OBJECT *)sub_140779C10(*((_QWORD *)P + 14), 1953261124LL);
LABEL_18:
            v15 = 0LL;
LABEL_19:
            v5 = 1;
            goto LABEL_20;
          }
LABEL_96:
          v10 = -1073741670;
          goto LABEL_97;
        }
        _InterlockedIncrement((volatile signed __int32 *)v16);
        v23 = (char *)P;
        if ( (*((_DWORD *)P + 1) & 1) != 0 )
        {
          v10 = -1073741771;
        }
        else
        {
          if ( (byte_140C0DD4C & 2) != 0 )
          {
            sub_140563A9C(
              (*((_DWORD *)P + 1) >> 1) & 1,
              (const EVENT_DESCRIPTOR *)qword_14003B670,
              (__int64)P,
              *((const wchar_t **)P + 1),
              *((const wchar_t **)P + 2),
              (*((_DWORD *)P + 1) & 2) != 0,
              *((_QWORD *)P + 15) != 0LL);
            v23 = (char *)P;
          }
          if ( (*((_DWORD *)v23 + 1) & 2) == 0 )
          {
            v24 = *((_QWORD *)v23 + 15);
            if ( v24 )
            {
              v25 = *(unsigned int *)(*(_QWORD *)(v24 + 64) + 8LL);
              if ( (v25 & 2) == 0 )
              {
                if ( !(unsigned __int8)sub_14095353C(v23, a1) )
                {
                  v48 = 0;
                  v44 = 0LL;
                  if ( (byte_140C0DD4C & 2) != 0 )
                    sub_14056370C(
                      v25,
                      (const EVENT_DESCRIPTOR *)qword_14003B340,
                      v26,
                      *((const wchar_t **)P + 1),
                      *((const wchar_t **)P + 2));
                  v27 = sub_140764604(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v26, &v48, &v44);
                  v15 = 0LL;
                  v10 = v27;
                  if ( v27 < 0 )
                    goto LABEL_31;
                  v28 = P;
                  v29 = *((_QWORD *)P + 21);
                  if ( v29 )
                  {
                    sub_140779620(*((unsigned int *)P + 44), v29, 1466986064LL);
                    v28 = P;
                    v15 = 0LL;
                  }
                  v28[44] = v48;
                  v13 = P;
                  *((_QWORD *)P + 21) = v44;
LABEL_20:
                  if ( !a2 )
                    goto LABEL_24;
                  if ( v5 )
                  {
                    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)sub_140564310);
                    if ( !*(_BYTE *)(a2 + 68) )
                    {
                      *((_QWORD *)P + 18) = a2;
                      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
                      goto LABEL_24;
                    }
                    v10 = -1073741536;
                  }
                  else
                  {
                    v10 = sub_1402E0978(*(_WORD **)(a2 + 24), *(unsigned int *)(v2 + 8), *((_QWORD *)P + 10));
                    if ( v10 >= 0 )
                    {
                      v10 = sub_1402DCD64(*(_WORD **)(a2 + 24), *(unsigned int *)(v2 + 8), &v45);
                      if ( v10 >= 0 )
                      {
LABEL_24:
                        *((_DWORD *)P + 1) |= 1u;
                        if ( a2 )
                        {
                          v13 = *(_QWORD **)(v2 + 48);
                          v13[4] = P;
                          P = v15;
                        }
                        if ( v3 )
                        {
                          IoInvalidateDeviceRelations(v3, SingleBusRelations);
                          LOBYTE(v15) = 0;
                        }
                        if ( v4 )
                        {
                          IoInvalidateDeviceRelations(v4, SingleBusRelations);
                          LOBYTE(v15) = 0;
                        }
                        if ( v10 >= 0 )
                          goto LABEL_31;
                      }
                    }
                  }
LABEL_97:
                  if ( NewElement != (_BYTE)v15 )
                  {
                    if ( (byte_140C0DD4C & 2) != 0 )
                      sub_14056370C(
                        (__int64)v13,
                        (const EVENT_DESCRIPTOR *)qword_14003B450,
                        v14,
                        *((const wchar_t **)P + 1),
                        *((const wchar_t **)P + 2));
                    RtlDeleteElementGenericTableAvl(&stru_140C447A0, &P);
                    sub_140661C18(P);
                    if ( *((_QWORD *)P + 14) )
                      sub_14095336C(P);
                  }
                  goto LABEL_31;
                }
                v23 = (char *)P;
              }
              if ( (byte_140C0DD4C & 2) != 0 )
              {
                sub_14056370C(
                  v25,
                  (const EVENT_DESCRIPTOR *)qword_14003B2B0,
                  (__int64)v23,
                  *((const wchar_t **)v23 + 1),
                  *((const wchar_t **)v23 + 2));
                v23 = (char *)P;
              }
              v30 = (void *)*((_QWORD *)v23 + 11);
              if ( v30 )
              {
                sub_140953AB8(v30);
                *((_QWORD *)P + 11) = 0LL;
                v23 = (char *)P;
              }
              v10 = sub_1409539A8(v23 + 88, a1);
              if ( v10 < 0 )
                goto LABEL_31;
              *((_DWORD *)P + 1) |= 2u;
              goto LABEL_17;
            }
          }
          v31 = sub_140779C10(*((_QWORD *)v23 + 14), 1953261124LL);
          v32 = P;
          v3 = (struct _DEVICE_OBJECT *)v31;
          if ( v31 && sub_1406E34FC((__int64)P, v31, 1) )
          {
            ObfDereferenceObject(v33);
            v3 = 0LL;
            if ( (byte_140C0DD4C & 2) != 0 )
              sub_14056370C(
                v34,
                (const EVENT_DESCRIPTOR *)qword_14003B2B0,
                v35,
                *((const wchar_t **)P + 1),
                *((const wchar_t **)P + 2));
            v36 = sub_1409539A8((char *)P + 88, a1);
            v15 = 0LL;
            v10 = v36;
            if ( v36 < 0 )
              goto LABEL_31;
            goto LABEL_19;
          }
          if ( wcsicmp(*(const wchar_t **)(v32[14] + 8LL), *(const wchar_t **)(a1 + 8)) )
          {
            RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
            v4 = (struct _DEVICE_OBJECT *)sub_140779C10(&DestinationString, 1953261124LL);
          }
          *((_DWORD *)P + 1) &= ~4u;
          sub_14095336C(P);
          sub_140661CD8((__int64)P + 24);
          v37 = P;
          if ( *((_QWORD *)P + 19) )
          {
            ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
            *((_QWORD *)P + 19) = 0LL;
            *((_DWORD *)P + 40) = 0;
            v37 = P;
          }
          v38 = v37[21];
          if ( v38 )
          {
            sub_140779620(*((unsigned int *)v37 + 44), v38, 1466986064LL);
            *((_DWORD *)P + 44) = 0;
            *((_QWORD *)P + 21) = 0LL;
            v37 = P;
          }
          sub_1407645E0((_QWORD **)v37 + 23);
          v10 = sub_140764758((__int64)P + 24, a1);
          if ( v10 < 0 )
            goto LABEL_31;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = sub_140953348(*(unsigned int *)(a1 + 88));
            v40 = (void *)*((_QWORD *)P + 19);
            if ( !v40 )
            {
              v10 = -1073741670;
              goto LABEL_31;
            }
            memmove(v40, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          v10 = sub_140764604(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v39, (_DWORD *)P + 44, (__int64 *)P + 21);
          if ( v10 >= 0 )
          {
            v10 = sub_140764970(*(const wchar_t **)(a1 + 8), (__int64)P, v41);
            if ( v10 >= 0 )
            {
              CurrentThreadProcessId = PsGetCurrentThreadProcessId();
              v13 = P;
              *((_DWORD *)P + 41) = CurrentThreadProcessId;
              *((_DWORD *)P + 1) &= ~2u;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_31:
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
  if ( v10 >= 0 && !v5 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      v10 = sub_14076E714(*(_QWORD *)(a2 + 24), 1LL, v11, *(unsigned int *)(a1 + 104));
      if ( v10 == -1073741772 )
        v10 = 0;
    }
  }
LABEL_33:
  if ( a2 )
  {
    if ( v10 < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        v10 = 259;
        goto LABEL_37;
      }
      *(_QWORD *)(a2 + 56) = v45 + 2;
    }
    *(_DWORD *)(a2 + 48) = v10;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( v10 >= 0 )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      sub_1405639AC(v9, v8, v11, *((const wchar_t **)P + 1), *((const wchar_t **)P + 2), *((_DWORD *)P + 45), 1);
    *((_DWORD *)P + 45) = 1;
    sub_140953700(P);
  }
LABEL_37:
  if ( P )
    sub_140661C18(P);
  if ( Buffer )
    sub_140661C18(Buffer);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v10;
}
