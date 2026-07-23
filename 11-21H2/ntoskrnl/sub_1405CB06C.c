/*
 * XREFs of sub_1405CB06C @ 0x1405CB06C
 * Callers:
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 *     sub_1409A0958 @ 0x1409A0958 (sub_1409A0958.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405CC8E4 @ 0x1405CC8E4 (sub_1405CC8E4.c)
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_140943144 @ 0x140943144 (sub_140943144.c)
 *     sub_14098D024 @ 0x14098D024 (sub_14098D024.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405CB06C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  NTSTATUS DevicePropertyData; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rsi
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  struct _KTHREAD *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned int v12; // edx
  int v13; // r9d
  _QWORD *v14; // r15
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rax
  unsigned int v18; // r14d
  __int64 *v19; // rbx
  __int64 *v20; // rax
  __int64 *v21; // rax
  unsigned __int64 v22; // rax
  __int64 Pool2; // r12
  volatile signed __int32 *v24; // rcx
  unsigned int v25; // ebx
  volatile signed __int32 *v26; // rdx
  __int64 v27; // rax
  volatile signed __int32 *v28; // rax
  const GUID *v29; // r9
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v32; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v33; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG RequiredSize; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v36; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v37; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v41; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  __int128 v44; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  unsigned int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  unsigned int *v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  __int64 *v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  __int64 v59; // [rsp+150h] [rbp+50h] BYREF
  __int16 v60; // [rsp+158h] [rbp+58h]
  __int64 v61; // [rsp+160h] [rbp+60h] BYREF
  __int16 v62; // [rsp+168h] [rbp+68h]

  v60 = 0;
  v33 = 0;
  v41.Buffer = (wchar_t *)&v59;
  v2 = a1;
  LOBYTE(a1) = 1;
  v44 = 0LL;
  v62 = 0;
  v59 = 0x5C004900430050LL;
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v61;
  v32 = 0;
  Type = 0;
  *(_QWORD *)&v41.Length = 655368LL;
  v61 = 0x5C004200530055LL;
  *(_QWORD *)&String1.Length = 655368LL;
  sub_140943144(a1);
  RequiredSize = 0;
  Data = -1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23CB8, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23B98, 0LL);
  a2[1] = a2;
  *a2 = a2;
  for ( i = (ULONG_PTR *)qword_140C23B80; i != &qword_140C23B80; i = (ULONG_PTR *)*i )
  {
    v7 = i + 109;
    if ( i[6] && (unsigned __int8)sub_1405CC8E4(i, v2, i + 111) )
    {
      sub_140355350((ULONG_PTR)i);
      v8 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v8 != a2 )
        __fastfail(3u);
      *v7 = a2;
      i[110] = (ULONG_PTR)v8;
      *v8 = v7;
      a2[1] = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23B98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23B98);
  v9 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C23B98 - qword_140C50630 >= 0x8000000000LL )
    v10 = -1;
  else
    v10 = sub_140287F30(*((_QWORD *)v9 + 23));
  _disable();
  v11 = (__int64)v9 + 1696;
  v12 = 0;
  while ( (*(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23B98 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v11 + 18)
       || (*(_DWORD *)v11 & 1) != 0
       || *(_DWORD *)(v11 + 8) != v10 )
  {
    ++v12;
    v11 += 96LL;
    if ( v12 >= 6 )
      goto LABEL_19;
  }
  *(_BYTE *)(v11 + 18) = 0;
  if ( !v11 )
  {
LABEL_19:
    if ( (*((_DWORD *)v9 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_140C23B98, v10, 0LL);
    _enable();
    goto LABEL_27;
  }
  if ( *(__int64 *)v11 < 0 )
  {
    *(_BYTE *)v11 |= 2u;
    _enable();
    sub_14034EE30(v11);
    _disable();
  }
  v13 = *(_DWORD *)(v11 + 88);
  *(_DWORD *)(v11 + 88) = 0;
  *(_BYTE *)(v11 + 17) = 0;
  *(_QWORD *)v11 = 0LL;
  *((_BYTE *)v9 + 792) |= 1 << *(_BYTE *)(v11 + 16);
  _enable();
  if ( v13 )
    sub_14022B568((ULONG_PTR)v9, (__int64)&qword_140C23B98, v13);
LABEL_27:
  v14 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      v15 = (__int64 *)*(v14 - 103);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v15[4],
                             &stru_14003BEE0,
                             0,
                             0,
                             4u,
                             &Data,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData < 0 || Data != 8 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               (PDEVICE_OBJECT)v15[4],
                               &stru_140010A18,
                               0,
                               0,
                               0x10u,
                               &v44,
                               &v33,
                               &v32);
        if ( DevicePropertyData < 0 || v32 != 13 || v33 != 16 )
          goto LABEL_77;
        v16 = 0x11CFC46536FC9E60LL - v44;
        if ( (_QWORD)v44 == 0x11CFC46536FC9E60LL )
          v16 = 0x545345445680LL - *((_QWORD *)&v44 + 1);
        if ( v16 )
        {
LABEL_77:
          DevicePropertyData = 0;
          goto LABEL_78;
        }
      }
      v17 = (__int64 *)v15[1];
      v18 = 0;
      v19 = v15;
      while ( v17 )
      {
        v19 = v17;
        v17 = (__int64 *)v17[1];
      }
      if ( v19 != v15 )
        break;
LABEL_78:
      v14 = (_QWORD *)*v14;
      if ( v14 == a2 )
        return (unsigned int)DevicePropertyData;
    }
    do
    {
      if ( *((_DWORD *)v19 + 39) == 1 )
      {
        _InterlockedAnd((volatile signed __int32 *)v19 + 74, 0xFFFFFFDF);
        if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v19 + 5), 0)
          || RtlPrefixUnicodeString(&v41, (PCUNICODE_STRING)(v19 + 5), 0) )
        {
          v20 = v19;
          if ( v19 == v15 )
          {
LABEL_46:
            _InterlockedOr((volatile signed __int32 *)v19 + 74, 0x20u);
            if ( v18 + 1 < v18 )
              goto LABEL_83;
            ++v18;
            DevicePropertyData = 0;
          }
          else
          {
            while ( *((_DWORD *)v20 + 39) == 1 )
            {
              v20 = (__int64 *)v20[2];
              if ( v20 == v15 )
                goto LABEL_46;
            }
          }
        }
      }
      v21 = (__int64 *)*v19;
      if ( *v19 )
      {
        do
        {
          v19 = v21;
          v21 = (__int64 *)v21[1];
        }
        while ( v21 );
      }
      else
      {
        v19 = (__int64 *)v19[2];
      }
    }
    while ( v19 != v15 );
    if ( !v18 )
      goto LABEL_78;
    v22 = 8LL * v18;
    if ( v22 > 0xFFFFFFFF )
    {
LABEL_83:
      DevicePropertyData = -1073741675;
      goto LABEL_80;
    }
    DevicePropertyData = 0;
    Pool2 = ExAllocatePool2(256LL, (unsigned int)v22, 1297630800LL);
    if ( Pool2 )
    {
      v24 = (volatile signed __int32 *)v15[1];
      v25 = 0;
      v26 = (volatile signed __int32 *)v15;
      while ( v24 )
      {
        v26 = v24;
        v24 = (volatile signed __int32 *)*((_QWORD *)v24 + 1);
      }
      if ( v26 == (volatile signed __int32 *)v15 )
        goto LABEL_73;
      while ( 1 )
      {
        _m_prefetchw((const void *)(v26 + 74));
        if ( (_InterlockedOr(v26 + 74, 0) & 0x20) != 0 )
        {
          if ( v25 >= v18 )
          {
            if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
            {
              v47 = 4LL;
              v36 = v25 + 1;
              v37 = v18;
              v46 = &v36;
              v49 = 4LL;
              v48 = &v37;
              v42 = 0x1000000LL;
              v50 = &v42;
              v51 = 8LL;
              sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_14002E28F, 0LL, v29, 5u, &v45);
            }
LABEL_72:
            if ( v25 != v18 )
            {
LABEL_73:
              if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
              {
                v38 = v25;
                v53 = &v38;
                v54 = 4LL;
                v55 = &v39;
                v39 = v18;
                v57 = &v43;
                v56 = 4LL;
                v43 = 0x1000000LL;
                v58 = 8LL;
                sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&word_14002E2EE, 0LL, 0LL, 5u, &v52);
              }
            }
            v14[3] = Pool2;
            *((_DWORD *)v14 + 8) = v25;
            goto LABEL_78;
          }
          _InterlockedAnd(v26 + 74, 0xFFFFFFDF);
          v27 = v25++;
          *(_QWORD *)(Pool2 + 8 * v27) = v26;
        }
        v28 = *(volatile signed __int32 **)v26;
        if ( *(_QWORD *)v26 )
        {
          do
          {
            v26 = v28;
            v28 = (volatile signed __int32 *)*((_QWORD *)v28 + 1);
          }
          while ( v28 );
        }
        else
        {
          v26 = (volatile signed __int32 *)*((_QWORD *)v26 + 2);
        }
        if ( v26 == (volatile signed __int32 *)v15 )
          goto LABEL_72;
      }
    }
    DevicePropertyData = -1073741670;
LABEL_80:
    sub_14098D024(a2);
  }
  return (unsigned int)DevicePropertyData;
}
