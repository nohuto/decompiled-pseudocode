/*
 * XREFs of sub_14076E9B8 @ 0x14076E9B8
 * Callers:
 *     sub_1406E60B0 @ 0x1406E60B0 (sub_1406E60B0.c)
 *     sub_1409478F0 @ 0x1409478F0 (sub_1409478F0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402D2524 @ 0x1402D2524 (sub_1402D2524.c)
 *     sub_1402DE33C @ 0x1402DE33C (sub_1402DE33C.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140560E60 @ 0x140560E60 (sub_140560E60.c)
 *     sub_140560EC4 @ 0x140560EC4 (sub_140560EC4.c)
 *     sub_14056489C @ 0x14056489C (sub_14056489C.c)
 *     sub_1406DFC4C @ 0x1406DFC4C (sub_1406DFC4C.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     sub_14074761C @ 0x14074761C (sub_14074761C.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_14074856C @ 0x14074856C (sub_14074856C.c)
 *     sub_140749848 @ 0x140749848 (sub_140749848.c)
 *     sub_1407499A8 @ 0x1407499A8 (sub_1407499A8.c)
 *     sub_140749A80 @ 0x140749A80 (sub_140749A80.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_14074ABF0 @ 0x14074ABF0 (sub_14074ABF0.c)
 *     sub_14074B2C8 @ 0x14074B2C8 (sub_14074B2C8.c)
 *     sub_14074B394 @ 0x14074B394 (sub_14074B394.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 *     sub_14074C8DC @ 0x14074C8DC (sub_14074C8DC.c)
 *     sub_14074CA14 @ 0x14074CA14 (sub_14074CA14.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_140768A4C @ 0x140768A4C (sub_140768A4C.c)
 *     sub_14076ACE4 @ 0x14076ACE4 (sub_14076ACE4.c)
 *     sub_14076AD40 @ 0x14076AD40 (sub_14076AD40.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076B24C @ 0x14076B24C (sub_14076B24C.c)
 *     sub_14076B308 @ 0x14076B308 (sub_14076B308.c)
 *     sub_14076B438 @ 0x14076B438 (sub_14076B438.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 *     sub_14076C288 @ 0x14076C288 (sub_14076C288.c)
 *     sub_14076C544 @ 0x14076C544 (sub_14076C544.c)
 *     sub_14076C764 @ 0x14076C764 (sub_14076C764.c)
 *     sub_14076DC84 @ 0x14076DC84 (sub_14076DC84.c)
 *     sub_14076E168 @ 0x14076E168 (sub_14076E168.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_14076FC68 @ 0x14076FC68 (sub_14076FC68.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 *     sub_1407734D8 @ 0x1407734D8 (sub_1407734D8.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_14078D510 @ 0x14078D510 (sub_14078D510.c)
 *     sub_1407EC8C4 @ 0x1407EC8C4 (sub_1407EC8C4.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_14086358C @ 0x14086358C (sub_14086358C.c)
 *     sub_140946EF8 @ 0x140946EF8 (sub_140946EF8.c)
 *     sub_140947BEC @ 0x140947BEC (sub_140947BEC.c)
 *     sub_14094E998 @ 0x14094E998 (sub_14094E998.c)
 *     sub_14094FC28 @ 0x14094FC28 (sub_14094FC28.c)
 *     sub_140950B80 @ 0x140950B80 (sub_140950B80.c)
 *     sub_140957408 @ 0x140957408 (sub_140957408.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14076E9B8(ULONG_PTR MaxDataSize)
{
  __int64 v2; // rcx
  int v3; // r13d
  HANDLE v4; // r12
  struct _DEVICE_OBJECT *v5; // r15
  int v6; // eax
  wchar_t *v7; // rax
  int v8; // ebx
  char v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // eax
  int v14; // ebx
  WCHAR *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  int v22; // edx
  struct _DEVICE_OBJECT *v23; // rax
  ULONG_PTR v24; // rbx
  int v25; // esi
  struct _KTHREAD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned int v29; // eax
  int v30; // eax
  int v31; // r14d
  int v32; // eax
  PVOID v33; // rsi
  WCHAR *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rax
  struct _KTHREAD *v39; // rax
  HANDLE v40; // rsi
  WCHAR *v41; // r12
  PVOID v42; // r13
  int v43; // r14d
  int v44; // eax
  char v45; // bl
  int v46; // eax
  int v47; // r14d
  PVOID v48; // r14
  int v49; // eax
  unsigned int v50; // ebx
  int v51; // eax
  unsigned int v52; // ebx
  struct _KTHREAD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  PVOID v59; // rcx
  int v61; // edx
  int v62; // r8d
  struct _KTHREAD *CurrentThread; // rax
  char v64; // al
  _QWORD *v65; // rcx
  PVOID v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // eax
  unsigned int v72; // eax
  int v73; // eax
  int v74; // esi
  __int64 v75; // rdx
  bool v76; // zf
  int v77; // edx
  int v78; // r8d
  unsigned int v79; // eax
  int v80; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *DeviceNode; // rcx
  unsigned __int16 *v84; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  _WORD *v86; // rax
  __int64 v87; // rcx
  _WORD *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  _WORD *v91; // rcx
  __int64 v92; // rcx
  unsigned __int16 *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rcx
  _WORD *v97; // rcx
  __int64 v98; // rcx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  unsigned int v102; // edx
  char v103; // al
  int v104; // ecx
  int v105; // ecx
  bool v106; // [rsp+58h] [rbp-B0h]
  _BYTE v107[3]; // [rsp+59h] [rbp-AFh] BYREF
  unsigned int v108; // [rsp+5Ch] [rbp-ACh] BYREF
  int v109; // [rsp+60h] [rbp-A8h] BYREF
  int v110; // [rsp+64h] [rbp-A4h]
  int v111; // [rsp+68h] [rbp-A0h] BYREF
  int v112; // [rsp+6Ch] [rbp-9Ch]
  __int64 v113; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v115; // [rsp+80h] [rbp-88h] BYREF
  int v116; // [rsp+88h] [rbp-80h] BYREF
  int v117; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v118; // [rsp+90h] [rbp-78h]
  int v119; // [rsp+94h] [rbp-74h]
  PVOID v120; // [rsp+98h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v122; // [rsp+A8h] [rbp-60h] BYREF
  int v123; // [rsp+B0h] [rbp-58h] BYREF
  int v124; // [rsp+B4h] [rbp-54h] BYREF
  PVOID v125; // [rsp+B8h] [rbp-50h] BYREF
  PVOID P; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v127; // [rsp+C8h] [rbp-40h]
  int v128; // [rsp+D0h] [rbp-38h] BYREF
  int v129; // [rsp+D4h] [rbp-34h] BYREF
  __int64 v130; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v131; // [rsp+E0h] [rbp-28h] BYREF
  wchar_t *Str; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t *v133; // [rsp+F0h] [rbp-18h]
  const WCHAR *v134; // [rsp+F8h] [rbp-10h] BYREF
  PVOID v135; // [rsp+100h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+0h] BYREF
  __int64 v137; // [rsp+118h] [rbp+10h] BYREF
  __int128 v138; // [rsp+120h] [rbp+18h] BYREF
  __int128 v139; // [rsp+130h] [rbp+28h]
  __int64 v140; // [rsp+140h] [rbp+38h]
  _DWORD v141[16]; // [rsp+148h] [rbp+40h] BYREF
  GUID Guid; // [rsp+188h] [rbp+80h] BYREF

  SourceString = 0LL;
  memset(v141, 0, sizeof(v141));
  Guid = 0LL;
  v122 = 0LL;
  DestinationString = 0LL;
  v117 = 0;
  v125 = 0LL;
  v135 = 0LL;
  P = 0LL;
  v124 = 0;
  v120 = 0LL;
  v129 = 0;
  v131 = 0LL;
  v134 = 0LL;
  v116 = 0;
  v123 = 0;
  LOBYTE(v109) = 0;
  v115 = 0LL;
  if ( (byte_140C0DD4B & 8) != 0 )
    sub_140560E60(v2, (const EVENT_DESCRIPTOR *)qword_14003B1D0, 0LL, MaxDataSize);
  LOBYTE(v118) = 0;
  v106 = 0;
  v119 = 0;
  v3 = 0;
  v110 = 0;
  v4 = 0LL;
  v5 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v137 = MEMORY[0xFFFFF78000000014];
  v108 = 0;
  LODWORD(v113) = 0;
  v111 = 0;
  v107[0] = 0;
  Handle = 0LL;
  v112 = 0;
  sub_140779DC4(&v135);
  sub_14076FBEC(MaxDataSize, 0x2000000LL);
  Str = 0LL;
  v128 = 0;
  v127 = 0LL;
  v133 = 0LL;
  v6 = sub_14074C8DC(MaxDataSize, 0, (PVOID *)&Str, &v128);
  if ( v6 < 0 )
  {
    v74 = v6;
    if ( v6 == -1073479624 )
      v74 = -1073741823;
    v110 = v74;
  }
  else
  {
    v127 = Str;
    v7 = wcschr(Str, 0x5Cu);
    *v7 = 0;
    v133 = v7 + 1;
  }
  v8 = sub_14074B394((int)v5, v141);
  sub_14074A08C(MaxDataSize, 2);
  v9 = 0;
  if ( v8 >= 0 )
  {
    if ( (v141[1] & 0x20000) != 0 )
      sub_140767220(MaxDataSize, 2);
    if ( (v141[1] & 0x40) != 0 )
      v9 = 1;
  }
  if ( (v141[1] & 0x20) != 0 )
  {
    if ( *(_DWORD *)(MaxDataSize + 568) == 4 )
      sub_14094FC28(MaxDataSize);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(MaxDataSize + 568) = v10;
  v130 = -1LL;
  v140 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  if ( (int)sub_14074C6C0(v5, (ULONG_PTR)qword_14000FEB8, 1u, 0x28u, 0LL, (USHORT *)&v138) >= 0 )
  {
    if ( v140 )
    {
      if ( WORD1(v138) == 1 )
      {
        sub_14042A5E0(*((_QWORD *)&v138 + 1), &v130);
        if ( *((_QWORD *)&v139 + 1) )
          sub_14042A5E0(*((_QWORD *)&v138 + 1), v75);
      }
    }
  }
  sub_14074B2C8(*(_QWORD *)(MaxDataSize + 32), 0, v11, &v125);
  sub_14074B2C8(*(_QWORD *)(MaxDataSize + 32), 1, v12, &v131);
  v13 = sub_14074C8DC(MaxDataSize, 3, &v120, &v129);
  v14 = v13;
  if ( v9 )
  {
    if ( v13 == -1073741637 )
    {
      sub_140765114(MaxDataSize, 9, -1073741637);
      sub_14076FB70(*(_QWORD *)(MaxDataSize + 16), 0x200000LL);
      sub_140950B80(*(_QWORD *)(MaxDataSize + 16) + 40LL);
    }
  }
  else if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 9 )
  {
    v65 = *(_QWORD **)(MaxDataSize + 16);
    if ( v65 != qword_140C46278 )
    {
      v15 = (WCHAR *)v120;
      goto LABEL_152;
    }
  }
  v15 = (WCHAR *)v120;
  while ( 1 )
  {
    if ( v14 < 0 )
    {
      v76 = (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0;
      v110 = v14;
      if ( v76 || *(_DWORD *)(MaxDataSize + 404) != 9 )
      {
        if ( v14 == -1073741670 )
        {
          v77 = 3;
          v78 = -1073741670;
        }
        else
        {
          v78 = v14;
          v77 = 19;
        }
        sub_140765114(MaxDataSize, v77, v78);
      }
    }
    v18 = sub_1406DFC4C(MaxDataSize, (__int64)v127, (__int64)v133, (__int64)v15);
    if ( v18 >= 0 )
    {
      if ( (byte_140C0DD4B & 8) != 0 )
        sub_140560EC4(v17, v16, v19, MaxDataSize, *(_QWORD *)(MaxDataSize + 48));
      v18 = sub_140768A4C(MaxDataSize, &Handle, &v111);
      v20 = 0;
      if ( v18 < 0 )
      {
        sub_140765114(MaxDataSize, 19, v18);
        v3 = v111;
        v4 = Handle;
      }
      else
      {
        v3 = v111;
        v4 = Handle;
        if ( v111 == 1 )
          v20 = 0x20000;
        v112 = v20;
      }
    }
    if ( v18 >= 0 )
      v18 = v110;
    v110 = v18;
    sub_1402DE33C((__int64)v5, 16, 1);
    v21 = *(_DWORD *)(MaxDataSize + 300);
    if ( v21 == 769 )
    {
      v22 = 772;
    }
    else
    {
      if ( v21 != 770 )
        goto LABEL_30;
      v22 = 771;
    }
    sub_1402DE844(MaxDataSize, v22);
LABEL_30:
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 )
    {
      v79 = *(_DWORD *)(MaxDataSize + 404);
      if ( v79 <= 0x13 )
      {
        v80 = 524808;
        if ( _bittest(&v80, v79) )
          goto LABEL_35;
      }
    }
    if ( v3 == 1 )
      break;
    v23 = (struct _DEVICE_OBJECT *)sub_140779C10(MaxDataSize + 40, 1701867088LL);
    v24 = (ULONG_PTR)v23;
    if ( !v23 )
      goto LABEL_33;
    if ( v23 == v5 )
    {
      ObfDereferenceObjectWithTag(v23, 0x65706E50u);
LABEL_33:
      v18 = v110;
      goto LABEL_34;
    }
    if ( !v9 )
    {
      sub_14056489C(0);
      sub_1403D99B4((ULONG)v5, (PVOID)v5->Size);
      DriverObject = v5->DriverObject;
      if ( DriverObject )
      {
        sub_1403D99B4((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &v5->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          sub_1403D99B4((ULONG)p_DriverName, (PVOID)2);
          sub_1403D99B4((ULONG)v5->DriverObject->DriverName.Buffer, (PVOID)v5->DriverObject->DriverName.Length);
        }
      }
      DeviceNode = (char *)v5->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
      {
        v84 = (unsigned __int16 *)(DeviceNode + 40);
        sub_1403D99B4((ULONG)DeviceNode, (PVOID)0x310);
        if ( *v84 )
        {
          sub_1403D99B4((ULONG)v84, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v84 + 1), (PVOID)*v84);
        }
        DeviceObjectExtension = v5->DeviceObjectExtension;
        v86 = DeviceObjectExtension->DeviceNode;
        if ( v86[28] )
        {
          sub_1403D99B4((_DWORD)v86 + 56, (PVOID)2);
          sub_1403D99B4(
            *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)v5->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = v5->DeviceObjectExtension;
        }
        v87 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v87 )
        {
          v88 = (_WORD *)(v87 + 56);
          if ( *v88 )
          {
            sub_1403D99B4((ULONG)v88, (PVOID)2);
            v89 = *((_QWORD *)v5->DeviceObjectExtension->DeviceNode + 2);
            sub_1403D99B4(*(_QWORD *)(v89 + 64), (PVOID)*(unsigned __int16 *)(v89 + 56));
          }
        }
      }
      sub_1403D99B4(v24, (PVOID)*(unsigned __int16 *)(v24 + 2));
      v90 = *(_QWORD *)(v24 + 8);
      if ( v90 )
      {
        sub_1403D99B4(v90, (PVOID)(unsigned int)*(__int16 *)(v90 + 2));
        v91 = (_WORD *)(*(_QWORD *)(v24 + 8) + 56LL);
        if ( *v91 )
        {
          sub_1403D99B4((ULONG)v91, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(v24 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v24 + 8) + 56LL));
        }
      }
      v92 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
      if ( v92 )
      {
        v93 = (unsigned __int16 *)(v92 + 40);
        sub_1403D99B4(v92, (PVOID)0x310);
        if ( *v93 )
        {
          sub_1403D99B4((ULONG)v93, (PVOID)2);
          sub_1403D99B4(*((_QWORD *)v93 + 1), (PVOID)*v93);
        }
        v94 = *(_QWORD *)(v24 + 312);
        v95 = *(_QWORD *)(v94 + 40);
        if ( *(_WORD *)(v95 + 56) )
        {
          sub_1403D99B4(v95 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 56LL));
          v94 = *(_QWORD *)(v24 + 312);
        }
        v96 = *(_QWORD *)(*(_QWORD *)(v94 + 40) + 16LL);
        if ( v96 )
        {
          v97 = (_WORD *)(v96 + 56);
          if ( *v97 )
          {
            sub_1403D99B4((ULONG)v97, (PVOID)2);
            v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 16LL);
            sub_1403D99B4(*(_QWORD *)(v98 + 64), (PVOID)*(unsigned __int16 *)(v98 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, (ULONG_PTR)v5, v24, 0LL);
    }
    ZwClose(v4);
    v141[1] &= ~0x40u;
    Handle = 0LL;
    v4 = 0LL;
    v9 = 0;
    sub_140765114(MaxDataSize, 42, 0);
    sub_140947BEC((PCWSTR)v127, v15);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL) + 16LL) == *(_QWORD *)(MaxDataSize + 16) )
      sub_14056489C(0);
    ObfDereferenceObjectWithTag((PVOID)v24, 0x65706E50u);
    v65 = *(_QWORD **)(MaxDataSize + 16);
LABEL_152:
    v14 = sub_14080E438(v65[4], v15, &v115);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v15 = (WCHAR *)v115;
    v120 = v115;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v4 = Handle;
  if ( Handle && v125 )
  {
    v69 = -1LL;
    do
      ++v69;
    while ( *((_WORD *)v125 + v69) );
    sub_14076FE20(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      (_DWORD)Handle,
      1,
      1,
      (__int64)v125,
      2 * v69 + 2,
      v112);
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  v3 = v111;
LABEL_34:
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 && *(_DWORD *)(MaxDataSize + 404) == 42 )
    sub_140764FE4(MaxDataSize);
LABEL_35:
  if ( v4 )
  {
    if ( v3 != 1 )
      sub_14076DC84(*(_QWORD *)(MaxDataSize + 48));
    v25 = v112;
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)qword_140010918,
      18,
      *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 40LL) + 2,
      v112);
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)qword_140010930,
      16,
      (__int64)&v137,
      8,
      v25);
    sub_14077198C(qword_140D00AC0, *(_QWORD *)(MaxDataSize + 48), 1, 0LL, (__int64)qword_140010948, 0, 0LL, 0, v25);
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)qword_140010960,
      7,
      (__int64)&dword_140C54E94,
      4,
      v25);
  }
  else
  {
    v25 = v112;
  }
  if ( (v141[1] & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || (v99 = *(_DWORD *)(MaxDataSize + 404), v99 != 1) && v99 != 14 )
      sub_140946EF8(MaxDataSize, 29LL);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) != 0 )
  {
    v100 = *(_DWORD *)(MaxDataSize + 404);
    v110 = v18;
    if ( v100 == 9 )
      goto LABEL_57;
    v110 = v18;
    if ( v100 == 3 )
      goto LABEL_57;
    v110 = v18;
    if ( v100 == 19 )
      goto LABEL_57;
  }
  v26 = KeGetCurrentThread();
  --*((_WORD *)v26 + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v4 = Handle;
  if ( Handle && v131 )
  {
    v68 = -1LL;
    do
      ++v68;
    while ( *((_WORD *)v131 + v68) );
    sub_14076FE20(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      (_DWORD)Handle,
      14,
      1,
      (__int64)v131,
      2 * v68 + 2,
      v25);
  }
  v3 = v111;
  LOBYTE(v27) = v111 == 1;
  sub_14076FC68(MaxDataSize, v141, v27);
  if ( v130 != -1 )
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)qword_140017EC8,
      9,
      (__int64)&v130,
      8,
      v25);
  v28 = *(_QWORD *)(MaxDataSize + 48);
  v116 = 4;
  v106 = v3 == 1;
  if ( (int)sub_14077CD90(qword_140D00AC0, v28, (_DWORD)v4, 11, (__int64)&v123, (__int64)&v108, (__int64)&v116, 0) < 0
    || v123 != 4
    || v116 != 4 )
  {
    v29 = 0;
    v108 = 0;
    v61 = 1;
    goto LABEL_136;
  }
  v29 = v108;
  if ( (v108 & 0x20) != 0 )
  {
    v61 = 18;
    if ( (v108 & 1) != 0 )
      goto LABEL_137;
LABEL_136:
    v106 = 1;
    goto LABEL_137;
  }
  if ( (v108 & 0x40) == 0 )
    goto LABEL_50;
  v61 = 28;
LABEL_137:
  if ( (v141[1] & 0x100) != 0 )
  {
    v70 = *(_QWORD *)(MaxDataSize + 48);
    v108 = v29 | 0x400;
    sub_14076FE20(qword_140D00AC0, v70, (_DWORD)v4, 11, 4, (__int64)&v108, 4, v25);
  }
  else
  {
    if ( v61 == 28 )
    {
      v62 = sub_14086358C(*(_QWORD *)(MaxDataSize + 48), v4);
      v61 = 28;
    }
    else
    {
      v62 = 0;
    }
    sub_140765114(MaxDataSize, v61, v62);
  }
LABEL_50:
  v30 = sub_14076ACE4(*(_QWORD *)(MaxDataSize + 32), MaxDataSize + 40);
  v31 = v18;
  if ( v30 < 0 )
    v31 = v30;
  v110 = v31;
  if ( byte_140C097C4 )
  {
    *(_DWORD *)(MaxDataSize + 704) |= 0x1000u;
    v119 = 2;
  }
  else
  {
    v32 = (unsigned __int8)v118;
    if ( (v108 & 0x40000) != 0 )
      v32 = 1;
    v118 = v32;
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
LABEL_57:
  sub_14074C8DC(MaxDataSize, 1, &P, &v124);
  v33 = P;
  sub_1407EC8C4((PCWSTR)P);
  sub_14074C8DC(MaxDataSize, 2, &v122, &v117);
  sub_14078D510(v33, v122, MaxDataSize + 684);
  sub_14074CA14(*(_QWORD *)(MaxDataSize + 32), 5, &SourceString);
  v34 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v34, 0);
      v34 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)sub_14076AD40(MaxDataSize, v33, v122, (bool *)&v109) >= 0 )
  {
    LOBYTE(v35) = v109;
    goto LABEL_64;
  }
  if ( (v141[1] & 0x20) != 0 || (v141[1] & 0x40000) != 0 || (v141[1] & 0x10) == 0 )
    LOBYTE(v35) = 0;
  else
    v35 = 1LL;
  if ( !v34 )
  {
LABEL_64:
    v36 = 0LL;
    if ( v3 != 1 )
      v36 = (__int64)v4;
    if ( (int)sub_1407452A0(MaxDataSize, v36, v35, v34, &v134) >= 0 )
    {
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      v34 = (WCHAR *)v134;
      SourceString = v134;
    }
  }
  if ( !v34
    || (RtlInitUnicodeString(&DestinationString, v34),
        RtlGUIDFromString(&DestinationString, (GUID *)(MaxDataSize + 664)) < 0) )
  {
    *(_OWORD *)(MaxDataSize + 664) = 0LL;
  }
  v37 = KeGetCurrentThread();
  --*((_WORD *)v37 + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  sub_14076FB70(MaxDataSize, 32LL);
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v38 = KeGetCurrentThread();
    --*((_WORD *)v38 + 242);
    ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
    sub_14076C764(*(_QWORD *)(MaxDataSize + 48), (int)Handle, SourceString);
    ExReleaseResourceLite(&stru_140C462A0);
    KeLeaveCriticalRegion();
  }
  v39 = KeGetCurrentThread();
  --*((_WORD *)v39 + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v40 = Handle;
  v41 = (WCHAR *)v122;
  v42 = P;
  if ( Handle )
  {
    v43 = v124;
    if ( v106 || v111 == 1 )
    {
      v45 = v107[0];
    }
    else
    {
      v44 = sub_14076C544(MaxDataSize, (__int64)Handle, (const WCHAR *)P, v124, 1, (signed __int64)v107);
      v45 = v107[0];
      if ( v44 < 0 )
        v45 = 0;
      v107[0] = v45;
      if ( !v45 )
      {
        v46 = sub_14076C544(MaxDataSize, (__int64)v40, v41, v117, 0, (signed __int64)v107);
        v45 = v107[0];
        if ( v46 < 0 )
          v45 = 0;
      }
    }
    if ( v42 )
      sub_14076FE20(qword_140D00AC0, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v40, 2, 7, (__int64)v42, v43, v112);
    v47 = v112;
    if ( v41 )
      sub_14076FE20(qword_140D00AC0, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v40, 3, 7, (__int64)v41, v117, v112);
    if ( v45 || (_BYTE)v118 )
    {
      if ( v106 )
      {
        v102 = v108;
        v103 = v113;
      }
      else
      {
        v101 = sub_14094E998(*(_QWORD *)(MaxDataSize + 48), v40, &v113);
        v102 = v108;
        if ( v101 < 0 )
        {
          v103 = 0;
        }
        else
        {
          v103 = v113;
          v102 = v113 | v108;
          v108 |= v113;
        }
      }
      if ( (v103 & 0x20) != 0 || (v102 & 0x40000) != 0 )
      {
        v108 = v102 & 0xFFFBFFFF;
        sub_14076FE20(qword_140D00AC0, *(_QWORD *)(MaxDataSize + 48), (_DWORD)v40, 11, 4, (__int64)&v108, 4, v47);
        LOBYTE(v102) = v108;
      }
      if ( (v102 & 0x20) != 0 )
      {
        v106 = 1;
        sub_140765114(MaxDataSize, 18, 0);
      }
    }
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  v48 = v125;
  if ( v40 )
  {
    v115 = 0LL;
    v49 = 0;
    LODWORD(v113) = 0;
    v50 = 0;
    if ( v125 )
    {
      v67 = -1LL;
      do
        ++v67;
      while ( *((_WORD *)v125 + v67) );
      v50 = 2 * v67 + 2;
      v49 = sub_1407734D8(v125, v50, &v115, &v113);
    }
    sub_14077198C(
      qword_140D00AC0,
      *(_QWORD *)(MaxDataSize + 48),
      1,
      0LL,
      (__int64)qword_140010978,
      v49 != 0 ? 25 : 18,
      (__int64)v48,
      v50,
      v112);
    if ( (int)sub_14074ABF0(MaxDataSize, &v115, &v113) >= 0 )
    {
      v66 = v115;
      sub_14077198C(
        qword_140D00AC0,
        *(_QWORD *)(MaxDataSize + 48),
        1,
        0LL,
        (__int64)qword_14000E368,
        8210,
        (__int64)v115,
        2 * v113,
        v112);
      ExFreePoolWithTag(v66, 0);
    }
  }
  sub_1407499A8(MaxDataSize);
  v51 = sub_140749848(MaxDataSize);
  v52 = v110;
  if ( v51 < 0 )
    v52 = v51;
  if ( (v141[1] & 0x4000) == 0
    && ((*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || *(_DWORD *)(MaxDataSize + 404) != 14) )
  {
    if ( v106 )
    {
      v64 = v119;
      if ( v111 == 1 )
        v64 = v119 | 1;
      if ( dword_140D3B050 )
        sub_140747740(MaxDataSize, (__int64)v40, v64);
    }
    else if ( v40 )
    {
      sub_14074761C(MaxDataSize, v40);
    }
  }
  sub_140749A80(MaxDataSize);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v71 = *(_DWORD *)(MaxDataSize + 404), v71 > 0x1D)
    || (v104 = 541606408, !_bittest(&v104, v71)) )
  {
    sub_14076B030(v40, MaxDataSize + 40, 1);
  }
  if ( v40 )
  {
    sub_14076B24C(MaxDataSize, (__int64)v40, v111 == 1);
    sub_14076B308(MaxDataSize, (__int64)v40, v111 == 1);
  }
  sub_14074856C(MaxDataSize);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0
    || (v72 = *(_DWORD *)(MaxDataSize + 404), v72 > 0x13)
    || (v105 = 524808, !_bittest(&v105, v72)) )
  {
    v53 = KeGetCurrentThread();
    --*((_WORD *)v53 + 242);
    ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
    LOBYTE(v54) = v111 == 1;
    sub_14076FC68(MaxDataSize, v141, v54);
    ExReleaseResourceLite(&stru_140C462A0);
    KeLeaveCriticalRegion();
    sub_14076B438(MaxDataSize);
    LOBYTE(v55) = 1;
    v56 = sub_14076B554(MaxDataSize + 40, v55, MaxDataSize + 56, 0);
    if ( v56 < 0 )
      sub_140765114(MaxDataSize, 19, v56);
    v40 = Handle;
    v42 = P;
    v48 = v125;
    v41 = (WCHAR *)v122;
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x2000) == 0 || (v73 = *(_DWORD *)(MaxDataSize + 404), v73 != 9) && v73 != 3 )
  {
    sub_1402D2524((int)v5);
    if ( v40 )
      sub_14076E168(MaxDataSize, v40);
    sub_140772044(v57, *(_QWORD *)(MaxDataSize + 48), 1LL);
    sub_140772044(v58, *(_QWORD *)(MaxDataSize + 48), 14LL);
    sub_14076C288((__int128 *)&qword_140010990, v5);
    sub_14076BB10(MaxDataSize);
  }
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  if ( v41 )
    ExFreePoolWithTag(v41, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v40 )
    ZwClose(v40);
  if ( v120 )
    ExFreePoolWithTag(v120, 0);
  if ( v131 )
    ExFreePoolWithTag(v131, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  if ( v127 )
    ExFreePoolWithTag(v127, 0);
  v59 = v135;
  if ( v135 )
    sub_140779A50(v135);
  if ( (byte_140C0DD4B & 8) != 0 )
    sub_140560E60((__int64)v59, (const EVENT_DESCRIPTOR *)qword_14003B680, 0LL, MaxDataSize);
  if ( *(_DWORD *)(MaxDataSize + 568) )
    sub_140957408(MaxDataSize, v52);
  return v52;
}
