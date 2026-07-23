/*
 * XREFs of sub_14093A0B8 @ 0x14093A0B8
 * Callers:
 *     sub_140540798 @ 0x140540798 (sub_140540798.c)
 *     sub_14092BA58 @ 0x14092BA58 (sub_14092BA58.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_1403CFB04 @ 0x1403CFB04 (sub_1403CFB04.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 *     sub_14055A6A0 @ 0x14055A6A0 (sub_14055A6A0.c)
 *     sub_14055A870 @ 0x14055A870 (sub_14055A870.c)
 *     sub_14055B428 @ 0x14055B428 (sub_14055B428.c)
 *     sub_14055B654 @ 0x14055B654 (sub_14055B654.c)
 *     sub_14055B7B0 @ 0x14055B7B0 (sub_14055B7B0.c)
 *     sub_14056FC0C @ 0x14056FC0C (sub_14056FC0C.c)
 *     IoCreateNotificationEvent @ 0x1406EAB50 (IoCreateNotificationEvent.c)
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 *     sub_14093CA08 @ 0x14093CA08 (sub_14093CA08.c)
 *     sub_14093CFC8 @ 0x14093CFC8 (sub_14093CFC8.c)
 *     sub_14093D400 @ 0x14093D400 (sub_14093D400.c)
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 *     sub_140A65D84 @ 0x140A65D84 (sub_140A65D84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093A0B8(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, GUID **a7)
{
  PKEVENT v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // r13
  GUID *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  int v14; // edi
  HANDLE v15; // r14
  HANDLE v16; // r15
  HANDLE v17; // r12
  struct _EX_RUNDOWN_REF *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r14
  _BYTE *v28; // rcx
  int v29; // eax
  void *v30; // rsi
  int v31; // ecx
  const GUID *v32; // r9
  const GUID *v33; // r8
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rax
  struct _KEVENT *v38; // rcx
  char v40; // [rsp+38h] [rbp-D0h] BYREF
  bool v41; // [rsp+39h] [rbp-CFh] BYREF
  HANDLE v42; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE EventHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  HANDLE *p_EventHandle; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  PKEVENT *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  __int64 *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  __int64 *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  __int64 *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  __int64 *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  char *v69; // [rsp+148h] [rbp+40h]
  __int64 v70; // [rsp+150h] [rbp+48h]
  bool *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]
  HANDLE *v73; // [rsp+168h] [rbp+60h]
  __int64 v74; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v76; // [rsp+198h] [rbp+90h]
  __int64 v77; // [rsp+1A0h] [rbp+98h]
  PKEVENT *v78; // [rsp+1A8h] [rbp+A0h]
  __int64 v79; // [rsp+1B0h] [rbp+A8h]
  HANDLE *v80; // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v83; // [rsp+1E8h] [rbp+E0h]
  int v84; // [rsp+1F0h] [rbp+E8h]
  int v85; // [rsp+1F4h] [rbp+ECh]

  v50 = a4;
  v51 = a3;
  v49 = a2;
  v9 = 0LL;
  LODWORD(v47) = a1;
  v10 = 0LL;
  v45 = a6;
  Pool2 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  DestinationString = 0LL;
  v53 = 0LL;
  if ( !byte_140D00A88 && byte_140C0C6B8 )
  {
    KeQueryPerformanceCounter(&stru_140C46CE8);
    sub_14055A628(1);
    if ( dword_140C0CBE8 != MEMORY[0xFFFFF78000000244] )
    {
      dword_140C0CBE8 = MEMORY[0xFFFFF78000000244];
      dword_140C0CBEC = MEMORY[0xFFFFF78000000244] >> 12;
    }
    sub_14055B7B0();
    if ( a7 )
      *a7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v40 = ExAcquireResourceExclusiveLite(&stru_140C46C80, 0);
    if ( v40 == 1 )
    {
      v18 = (struct _EX_RUNDOWN_REF *)sub_14056FC0C();
      v10 = v18;
      if ( v18 )
      {
        qword_140D018C8 = sub_1403614FC(v18);
        if ( !qword_140D018C8 )
          goto LABEL_15;
        LOBYTE(v20) = 1;
        sub_14042A5E0(v20, v19);
        if ( !(unsigned __int8)sub_14042A5E0(v22, v21) )
        {
          sub_14042A5E0(0LL, v23);
          sub_1403614E0(v10);
          qword_140D018C8 = 0LL;
        }
        if ( !qword_140D018C8 )
LABEL_15:
          v10 = 0LL;
      }
      if ( (*(_DWORD *)(a6 + 24) & 0x10) != 0
        && (RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition"),
            v9 = IoCreateNotificationEvent(&DestinationString, &EventHandle),
            RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition"),
            v46 = (__int64)IoCreateNotificationEvent(&DestinationString, &Handle),
            v24 = v46,
            RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition"),
            v43 = (__int64)IoCreateNotificationEvent(&DestinationString, &v42),
            sub_14055A6A0((__int64)v9, v24, v43)) )
      {
        v14 = -1073741248;
      }
      else
      {
        Pool2 = (GUID *)ExAllocatePool2(64LL, 1160LL, 1886217292LL);
        if ( Pool2 )
        {
          v25 = v47;
          Pool2[5].Data1 &= 0xFFFFFFF3;
          v15 = 0LL;
          Pool2->Data1 = v25;
          *(_QWORD *)Pool2->Data4 = v49;
          *(_QWORD *)&Pool2[2].Data1 = a5;
          *(_QWORD *)&Pool2[56].Data1 = EventHandle;
          *(_QWORD *)Pool2[56].Data4 = Handle;
          *(_QWORD *)&Pool2[57].Data1 = v42;
          *(_QWORD *)&Pool2[58].Data1 = v46;
          v26 = v43;
          *(_QWORD *)Pool2[57].Data4 = v9;
          *(_QWORD *)&Pool2[1].Data1 = a3;
          v17 = 0LL;
          *(_QWORD *)Pool2[1].Data4 = a4;
          v16 = 0LL;
          *(_QWORD *)Pool2[58].Data4 = v26;
          qword_140D018D8 = (__int64)Pool2;
          *(_QWORD *)&Pool2[68].Data1 = 0LL;
          *(_QWORD *)Pool2[68].Data4 = 0LL;
          sub_14093CA08(Pool2);
          if ( !byte_140C0C6B8 || (Pool2[5].Data1 & 0x200) != 0 && !*(_QWORD *)&Pool2[71].Data1 )
            goto LABEL_32;
          EtwActivityIdControl(5u, Pool2 + 59);
          EtwActivityIdControl(1u, Pool2 + 60);
          if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
          {
            v85 = 0;
            v83 = &v43;
            v43 = 0x1000000LL;
            v84 = 8;
            sub_14020A9C4(
              (__int64)&dword_140C064E0,
              (unsigned __int8 *)&word_14002AF7E,
              Pool2 + 60,
              Pool2 + 59,
              3u,
              &v82);
          }
          v14 = sub_14093D400(Pool2, v45);
          if ( v14 < 0 )
            goto LABEL_33;
          if ( (*(_DWORD *)Pool2[2].Data4 & 8) == 0 || a7 )
          {
            v14 = sub_14093AAEC(Pool2);
            if ( v14 >= 0 )
              v14 = sub_140A65D84(Pool2);
          }
          else
          {
LABEL_32:
            v14 = -1073741811;
          }
LABEL_33:
          if ( qword_140D018C8 )
          {
            sub_14042A5E0(0LL, v13);
            sub_1403614E0(v10);
            qword_140D018C8 = 0LL;
          }
          if ( v15 )
            ZwClose(v15);
          if ( v16 )
            ZwClose(v16);
          if ( v17 )
            ZwClose(v17);
          v27 = v45;
          if ( (*(_DWORD *)(v45 + 24) & 0x10) != 0 && v14 == -1073741248 && sub_14055A67C() )
            EtwWrite(qword_140D00A98, &stru_1400380E8, 0LL, 0, 0LL);
          if ( v40 )
          {
            qword_140D018D8 = 0LL;
            ExReleaseResourceLite(&stru_140C46C80);
          }
          KeLeaveCriticalRegion();
          if ( v14 >= 0 )
          {
            v14 = sub_1403CFB04((__int64)&Pool2[61]);
            if ( v14 >= 0 )
            {
              if ( !*v28
                || (v29 = *(_DWORD *)Pool2[61].Data4) != 0
                && BYTE1(Pool2[61].Data1)
                && *(_DWORD *)&Pool2[61].Data2 == 4096
                && (v29 & 0xFFF) == 0 )
              {
                if ( (*(_DWORD *)Pool2[2].Data4 & 8) != 0 )
                {
                  v14 = -1073741802;
                  *a7 = Pool2;
                }
                else
                {
                  sub_14055A870();
                  v34 = sub_14055A628(0);
                  if ( *(_QWORD *)&Pool2[12].Data1 || *(_QWORD *)Pool2[12].Data4 )
                    v35 = sub_14093DA18((__int64)Pool2);
                  else
                    v35 = sub_14093D590((__int64)Pool2);
                  v14 = v35;
                  v36 = sub_14055A628(0);
                  if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
                  {
                    v43 = 0x1000000LL;
                    v76 = &v43;
                    v37 = *(_QWORD *)&Pool2[35].Data1;
                    v77 = 8LL;
                    v79 = 8LL;
                    v81 = 8LL;
                    v38 = *(struct _KEVENT **)(v37 + 4000);
                    v78 = (PKEVENT *)&v46;
                    v46 = (__int64)v38;
                    v42 = (HANDLE)(v36 - v34);
                    v80 = &v42;
                    sub_14020A9C4(
                      (__int64)&dword_140C064E0,
                      (unsigned __int8 *)byte_14002AFB1,
                      Pool2 + 60,
                      Pool2 + 59,
                      5u,
                      &v75);
                  }
                  sub_14055B428((__int64)Pool2, v36 - v34, 0LL, v14);
                  v27 = v45;
                  if ( v14 >= 0 && (Pool2[5].Data1 & 2) != 0 )
                    v14 = 261;
                }
              }
              else
              {
                v14 = -1073741823;
              }
            }
          }
          v30 = (void *)sub_14055A628(0);
          sub_14055B654((__int64)Pool2, 0LL, v14, v30);
          if ( (unsigned int)dword_140C064E0 > 5 && sub_1402A2000((__int64)&dword_140C064E0, 0x400000000000LL) )
          {
            v31 = *(_DWORD *)(v27 + 24);
            v55 = &v43;
            v43 = 0x1000000LL;
            p_EventHandle = &EventHandle;
            v46 = (unsigned int)v47;
            v59 = (PKEVENT *)&v46;
            v61 = &v49;
            v63 = &v51;
            v65 = &v50;
            v45 = a5;
            v67 = &v45;
            v40 = (v31 & 8) != 0;
            v56 = 8LL;
            v69 = &v40;
            v71 = &v41;
            v73 = &v42;
            LODWORD(EventHandle) = v14;
            v58 = 4LL;
            v60 = 8LL;
            v62 = 8LL;
            v64 = 8LL;
            v66 = 8LL;
            v68 = 8LL;
            v70 = 1LL;
            v41 = (v31 & 0x10) != 0;
            v72 = 1LL;
            v42 = v30;
            v74 = 8LL;
            if ( Pool2 )
            {
              v32 = Pool2 + 59;
              v33 = Pool2 + 60;
            }
            else
            {
              v32 = (const GUID *)&v53;
              v33 = (const GUID *)&v53;
            }
            sub_14020A9C4((__int64)&dword_140C064E0, (unsigned __int8 *)word_14002B00A, v33, v32, 0xCu, &v54);
          }
          if ( Pool2 )
          {
            if ( (*(_DWORD *)Pool2[2].Data4 & 8) == 0 )
              EtwActivityIdControl(2u, Pool2 + 59);
            if ( v14 != -1073741802 )
            {
              sub_14093CFC8(Pool2);
              ExFreePoolWithTag(Pool2, 0x706D644Cu);
            }
          }
          return (unsigned int)v14;
        }
        v14 = -1073741670;
      }
    }
    else
    {
      v14 = -1073741267;
    }
    v15 = EventHandle;
    v16 = Handle;
    v17 = v42;
    goto LABEL_33;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
