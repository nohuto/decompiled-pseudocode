/*
 * XREFs of NtTraceEvent @ 0x1402FE320
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 *     sub_14022AFF8 @ 0x14022AFF8 (sub_14022AFF8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140460192 @ 0x140460192 (sub_140460192.c)
 *     sub_140630ACC @ 0x140630ACC (sub_140630ACC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_14079488C @ 0x14079488C (sub_14079488C.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 *     sub_1409E386C @ 0x1409E386C (sub_1409E386C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  __int64 v5; // rsi
  ULONG v7; // eax
  int v8; // r13d
  int v9; // esi
  unsigned __int8 *v10; // r14
  _QWORD *v11; // rcx
  __int64 v12; // r8
  ULONG v13; // edi
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // edx
  int v17; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // edx
  unsigned __int16 v23; // r10
  __int64 v24; // r14
  __int64 v25; // rdi
  char v26; // r15
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // r14
  struct _KTHREAD *v32; // rax
  int v33; // r9d
  ULONG v34; // edi
  int v35; // edx
  unsigned __int16 v36; // r10
  __int64 v37; // r11
  unsigned int v38; // r9d
  char *v39; // rax
  __int64 v40; // rdx
  struct _KTHREAD *v41; // rax
  int v42; // r9d
  int v43; // edx
  unsigned __int8 v44; // [rsp+80h] [rbp-118h] BYREF
  char v45; // [rsp+81h] [rbp-117h]
  char *v46; // [rsp+88h] [rbp-110h]
  int v47; // [rsp+90h] [rbp-108h]
  int v48; // [rsp+94h] [rbp-104h]
  unsigned __int64 v49; // [rsp+98h] [rbp-100h]
  unsigned __int8 v51; // [rsp+A2h] [rbp-F6h]
  __int16 v52; // [rsp+A4h] [rbp-F4h]
  NTSTATUS v53; // [rsp+A8h] [rbp-F0h]
  int v54; // [rsp+ACh] [rbp-ECh]
  int v55; // [rsp+B0h] [rbp-E8h]
  __int64 v56; // [rsp+B8h] [rbp-E0h]
  __int64 v57; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-C8h]
  __int64 v60; // [rsp+D8h] [rbp-C0h]
  __int64 v61; // [rsp+E0h] [rbp-B8h]
  int v62; // [rsp+F0h] [rbp-A8h]
  int v63; // [rsp+F4h] [rbp-A4h]
  char *v64; // [rsp+108h] [rbp-90h]
  unsigned __int64 v65; // [rsp+110h] [rbp-88h]
  __int64 v66; // [rsp+118h] [rbp-80h]
  __int64 v67; // [rsp+120h] [rbp-78h]
  PVOID Object[2]; // [rsp+128h] [rbp-70h] BYREF
  __int128 v69; // [rsp+138h] [rbp-60h] BYREF
  __int128 v70; // [rsp+148h] [rbp-50h]

  v5 = FieldSize;
  v7 = Flags & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *((_BYTE *)CurrentThread + 562) )
    {
      if ( ((unsigned __int8)Fields & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v49 = *((_QWORD *)Fields + 11);
    v65 = v49;
    LODWORD(v46) = *((_DWORD *)Fields + 21);
    v62 = (int)v46;
    v8 = *((unsigned __int16 *)Fields + 41);
    v66 = *((unsigned __int16 *)Fields + 41);
    v48 = *((_DWORD *)Fields + 28);
    v63 = v48;
    v58 = *((_QWORD *)Fields + 6);
    v67 = v58;
    v44 = *((_BYTE *)Fields + 44);
    v51 = v44;
    v56 = 0LL;
    if ( *((_BYTE *)Fields + 80) )
      v56 = (__int64)Fields + 96;
    Object[0] = 0LL;
    v9 = ObReferenceObjectByHandle(TraceHandle, 0x800u, qword_140D06AE8, 1, Object, 0LL);
    if ( v9 >= 0 )
    {
      v57 = 0LL;
      v10 = (unsigned __int8 *)Object[0];
      v11 = (_QWORD *)*((_QWORD *)Object[0] + 4);
      Object[0] = v11;
      v12 = *((_QWORD *)v10 + 5);
      CurrentThread = (struct _KTHREAD *)v12;
      v13 = Flags >> 31;
      v69 = 0LL;
      v70 = 0LL;
      v14 = *((_QWORD *)v10 + 13);
      v15 = v14 + 28;
      if ( !v14 )
        v15 = 0LL;
      v16 = v10[100];
      if ( (_BYTE)v16 )
      {
        v9 = sub_1407B4D70(
               (_DWORD)v11,
               v16,
               (unsigned __int16)v13,
               v8,
               v48,
               (__int64)Fields,
               v56,
               v44,
               v58,
               (_DWORD)v46,
               v49,
               (__int64)&v69,
               0LL,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v57);
        v11 = Object[0];
        v12 = (__int64)CurrentThread;
      }
      v17 = v10[101];
      if ( (_BYTE)v17 )
      {
        v9 = sub_1407B4D70(
               (_DWORD)v11,
               v17,
               (unsigned __int16)v13,
               v8,
               v48,
               (__int64)Fields,
               v56,
               v44,
               v58,
               (_DWORD)v46,
               v49,
               (__int64)&v69,
               v12,
               *((_WORD *)v10 + 49),
               v15,
               (__int64)&v57);
        v11 = Object[0];
      }
      if ( v11[50] )
      {
        v69 = 0LL;
        v70 = 0LL;
        v35 = v10[102];
        if ( (_BYTE)v35 )
        {
          v9 = sub_1407B4D70(
                 v11[50],
                 v35,
                 (unsigned __int16)v13,
                 0,
                 v48,
                 (__int64)Fields,
                 v56,
                 v44,
                 v58,
                 (_DWORD)v46,
                 v49,
                 (__int64)&v69,
                 0LL,
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v57);
          v11 = Object[0];
        }
        v43 = v10[103];
        if ( (_BYTE)v43 )
          v9 = sub_1407B4D70(
                 v11[50],
                 v43,
                 (unsigned __int16)v13,
                 0,
                 v48,
                 (__int64)Fields,
                 v56,
                 v44,
                 v58,
                 (_DWORD)v46,
                 v49,
                 (__int64)&v69,
                 *((_QWORD *)CurrentThread + 50),
                 *((_WORD *)v10 + 49),
                 v15,
                 (__int64)&v57);
      }
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    }
    return v9;
  }
  if ( v7 == 1536 )
  {
    v44 = 0;
    v24 = *(_QWORD *)(sub_140347DB0(TraceHandle, Flags, FieldSize, Fields) + 864);
    v25 = v23;
    if ( v23 == 0xFFFF || !v23 )
      v25 = *(unsigned __int8 *)(v24 + 4232);
    if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 16) )
      return -1073741816;
    v26 = *((_BYTE *)KeGetCurrentThread() + 562);
    v27 = sub_14022AFF8(v25, v24, v26, &v44);
    if ( !v27 )
      return -1073741816;
    if ( (*(_DWORD *)(v27 + 12) & 0x2000000) != 0 )
    {
      v40 = 32LL * *(unsigned __int8 *)(v27 + 818) + v24 + 4284;
      if ( v40 && (*(_DWORD *)(v40 + 4) & 0x28) != 0 )
        LOBYTE(v28) = 1;
      else
        v28 = 0;
      v9 = sub_1409E386C(v27, (int)Fields, v5, v28, v26);
      v53 = v9;
    }
    else
    {
      v9 = -1073741811;
      v53 = -1073741811;
    }
    if ( v44 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v24 + 448) + 8 * v25), 1u);
      sub_1402F9540((__int64)KeGetCurrentThread());
      return v53;
    }
    return v9;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x200u:
        Object[0] = TraceHandle;
        v49 = 0LL;
        if ( FieldSize == 40 )
        {
          if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
          {
            v46 = (char *)Fields;
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v46 + 40) > 0x7FFFFFFF0000LL || v46 + 40 < v46 )
              MEMORY[0x7FFFFFFF0000] = 0;
            v47 = *((_DWORD *)v46 + 6);
            if ( (Flags & 0x80000000) != 0 )
            {
              LODWORD(v49) = *((_DWORD *)v46 + 8);
              v47 |= 0x80u;
            }
            else
            {
              v49 = *((_QWORD *)v46 + 4);
            }
            v19 = *((unsigned int *)v46 + 7);
            v48 = v19;
            if ( (unsigned int)v19 <= 0x10000 )
            {
              if ( (_DWORD)v19 && (v49 + v19 > 0x7FFFFFFF0000LL || v49 + v19 < v49) )
                MEMORY[0x7FFFFFFF0000] = 0;
              HIDWORD(Object[0]) = v19;
              return sub_14022A8D0(
                       (unsigned __int64)Object[0],
                       v47 | 0x40u,
                       (__int128 *)(v46 + 8),
                       *((_WORD *)v46 + 2),
                       v49,
                       1u);
            }
            v9 = -1073741811;
            v53 = -1073741811;
            return v9;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x100u:
        return sub_140460192(
                 TraceHandle,
                 Fields,
                 48LL,
                 (((int)Flags >> 31) & 0xFFF60000) - 1072431104,
                 *((_BYTE *)KeGetCurrentThread() + 562));
      case 0x400u:
        v37 = *(_QWORD *)(sub_140347DB0(TraceHandle, Flags, FieldSize, Fields) + 864);
        v38 = 0;
        if ( v36 != 0xFFFF )
          v38 = v36;
        if ( v38 < *(_DWORD *)(v37 + 16) )
        {
          if ( (unsigned int)v5 > 0xFFDF )
            return -1073741675;
          if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
          {
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v39 = (char *)Fields + v5 + 32;
            if ( (unsigned __int64)v39 > 0x7FFFFFFF0000LL || v39 < Fields )
              MEMORY[0x7FFFFFFF0000] = 0;
            v64 = (char *)Fields + 32;
            v52 = *((_WORD *)Fields + 3);
            Object[0] = (char *)Fields + 32;
            Object[1] = (PVOID)(unsigned int)v5;
            sub_1403AB658(
              v37,
              (unsigned int)Object,
              (unsigned int)KeGetCurrentThread(),
              v38,
              1,
              v52,
              Flags & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x500u:
        v21 = *(_QWORD *)(sub_140347DB0(TraceHandle, *((_QWORD *)KeGetCurrentThread() + 153), FieldSize, Fields) + 864);
        if ( *(_DWORD *)(v21 + 4072) == v22 )
        {
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(v20 + 120) > 0x7FFFFFFF0000LL || v20 + 120 < (unsigned __int64)Fields )
            MEMORY[0x7FFFFFFF0000] = 0;
          return sub_1407B4D70(
                   (int)v21 + 24,
                   *(unsigned __int8 *)(v21 + 4064),
                   0,
                   0,
                   *(_DWORD *)(v20 + 112),
                   (__int64)Fields,
                   0LL,
                   *((_BYTE *)Fields + 44),
                   *((_QWORD *)Fields + 6),
                   *(_DWORD *)(v20 + 84),
                   *(_QWORD *)(v20 + 88),
                   0LL,
                   0LL,
                   0,
                   0LL,
                   0LL);
        }
        return -1073741790;
    }
    return -1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return sub_140460192(
               TraceHandle,
               Fields,
               72LL,
               (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
               *((_BYTE *)KeGetCurrentThread() + 562));
    if ( v7 == 2304 )
    {
      if ( Flags == 2304 && FieldSize && Fields )
        return sub_140630ACC(TraceHandle, Fields, FieldSize, *((unsigned __int8 *)KeGetCurrentThread() + 562));
      return -1073741811;
    }
    return -1073741811;
  }
  *(_OWORD *)Object = 0LL;
  if ( !TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)Fields & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)Fields + 120 > 0x7FFFFFFF0000LL || (char *)Fields + 120 < Fields )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)TraceHandle + 16 > 0x7FFFFFFF0000LL || (char *)TraceHandle + 16 < TraceHandle )
    MEMORY[0x7FFFFFFF0000] = 0;
  v60 = *((_QWORD *)Fields + 11);
  v54 = *((_DWORD *)Fields + 21);
  v55 = *((_DWORD *)Fields + 28);
  v61 = *((_QWORD *)Fields + 6);
  v45 = *((_BYTE *)Fields + 44);
  *(_OWORD *)Object = *(_OWORD *)TraceHandle;
  v29 = sub_140347DB0(TraceHandle, 0x7FFFFFFF0000LL, FieldSize, Fields);
  v30 = sub_1407968D0(*(_QWORD *)(v29 + 864), Object, 0LL);
  v31 = (_QWORD *)v30;
  if ( v30 )
  {
    if ( *(_DWORD *)(v30 + 96) )
    {
      v9 = sub_140794404(*(PSECURITY_DESCRIPTOR *)(v30 + 72), 0x800u);
      if ( v9 >= 0 )
      {
        v44 = 0;
        v32 = KeGetCurrentThread();
        --*((_WORD *)v32 + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v31 + 51), 0LL);
        v31[52] = KeGetCurrentThread();
        LOBYTE(v33) = 1;
        sub_14079488C((_DWORD)v31, 0, 0, v33, (__int64)&v44);
        v31[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v31 + 51), 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
        v34 = Flags >> 31;
        v9 = sub_1407B4D70(
               (_DWORD)v31,
               v44,
               (unsigned __int16)v34,
               0,
               v55,
               (__int64)Fields,
               0LL,
               v45,
               v61,
               v54,
               v60,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
        if ( v31[50] )
        {
          v44 = 0;
          v41 = KeGetCurrentThread();
          --*((_WORD *)v41 + 242);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v31 + 51), 0LL);
          v31[52] = KeGetCurrentThread();
          LOBYTE(v42) = 1;
          sub_14079488C(v31[50], 0, 1, v42, (__int64)&v44);
          v31[52] = 0LL;
          ExReleasePushLockEx((ULONG_PTR)(v31 + 51), 0LL);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v9 = sub_1407B4D70(
                 v31[50],
                 v44,
                 (unsigned __int16)v34,
                 0,
                 v55,
                 (__int64)Fields,
                 0LL,
                 v45,
                 v61,
                 v54,
                 v60,
                 0LL,
                 0LL,
                 0,
                 0LL,
                 0LL);
        }
      }
      sub_140796B04(v31);
      return v9;
    }
    sub_140796B04((PVOID)v30);
  }
  return -1073741054;
}
