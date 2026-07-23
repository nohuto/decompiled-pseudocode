/*
 * XREFs of sub_140779F10 @ 0x140779F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402426B4 @ 0x1402426B4 (sub_1402426B4.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DE48C @ 0x1402DE48C (sub_1402DE48C.c)
 *     sub_1402DF5A4 @ 0x1402DF5A4 (sub_1402DF5A4.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_1405613C4 @ 0x1405613C4 (sub_1405613C4.c)
 *     sub_14064F720 @ 0x14064F720 (sub_14064F720.c)
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_1406DCD40 @ 0x1406DCD40 (sub_1406DCD40.c)
 *     sub_1406DCFC0 @ 0x1406DCFC0 (sub_1406DCFC0.c)
 *     sub_1406E4980 @ 0x1406E4980 (sub_1406E4980.c)
 *     sub_1406E87E8 @ 0x1406E87E8 (sub_1406E87E8.c)
 *     sub_140768D10 @ 0x140768D10 (sub_140768D10.c)
 *     sub_140768E44 @ 0x140768E44 (sub_140768E44.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14076A134 @ 0x14076A134 (sub_14076A134.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140776274 @ 0x140776274 (sub_140776274.c)
 *     sub_1407772C8 @ 0x1407772C8 (sub_1407772C8.c)
 *     sub_140778D60 @ 0x140778D60 (sub_140778D60.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_14077A4D4 @ 0x14077A4D4 (sub_14077A4D4.c)
 *     sub_14077A624 @ 0x14077A624 (sub_14077A624.c)
 *     sub_14077A710 @ 0x14077A710 (sub_14077A710.c)
 *     sub_14077A8E0 @ 0x14077A8E0 (sub_14077A8E0.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077B908 @ 0x14077B908 (sub_14077B908.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140948594 @ 0x140948594 (sub_140948594.c)
 *     sub_1409485D8 @ 0x1409485D8 (sub_1409485D8.c)
 *     sub_140948638 @ 0x140948638 (sub_140948638.c)
 *     sub_1409486E4 @ 0x1409486E4 (sub_1409486E4.c)
 *     sub_140948814 @ 0x140948814 (sub_140948814.c)
 *     sub_140948AC4 @ 0x140948AC4 (sub_140948AC4.c)
 *     sub_140948FB8 @ 0x140948FB8 (sub_140948FB8.c)
 *     sub_140949104 @ 0x140949104 (sub_140949104.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140779F10(__int64 a1, const wchar_t *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // eax
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // eax
  void *Pool2; // r12
  int v22; // r9d
  int v23; // edx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  bool v30; // sf
  __int64 v31; // rsi
  ULONG_PTR *v32; // rbx
  ULONG_PTR v33; // rdx
  ULONG_PTR v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  _DWORD *v37; // rsi
  int v38; // eax
  void *v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r14d
  __int64 v44; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int v46; // ebx
  unsigned int v47; // eax
  int v48; // ecx
  __int64 v49; // rcx
  WCHAR *v50; // rsi
  bool v51; // al
  __int64 v52; // r8
  bool v53; // al
  __int64 v54; // r8
  _QWORD *v55; // rax
  _DWORD *v56; // rdx
  _QWORD *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  int v61; // eax
  int v62; // eax
  int v63; // esi
  void *v64; // r14
  __int64 v65; // rcx
  _QWORD *v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  int v71[2]; // [rsp+20h] [rbp-69h]
  char v72[8]; // [rsp+50h] [rbp-39h] BYREF
  size_t Size; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  __int64 v75; // [rsp+70h] [rbp-19h]
  char v76; // [rsp+78h] [rbp-11h]
  int v77; // [rsp+79h] [rbp-10h]
  __int16 v78; // [rsp+7Dh] [rbp-Ch]
  char v79; // [rsp+7Fh] [rbp-Ah]
  GUID Guid; // [rsp+80h] [rbp-9h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v17 = a4 - 14;
    if ( !v17 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          if ( *(int *)a6 < 0 )
            return 0;
          v66 = *(_QWORD **)(a6 + 8);
          v72[0] = 0;
          v67 = v66[1];
          if ( v67 )
          {
            if ( *v66 )
            {
              sub_140949104(4LL, v67, *v66, v72);
              if ( v72[0] )
                sub_140948FB8(v68, v66[1], v69, *v66);
            }
          }
        }
        else
        {
          if ( a3 != 6 || *(int *)a6 < 0 )
            return 0;
          v66 = *(_QWORD **)(a6 + 8);
          v70 = v66[1];
          if ( v70 && *v66 )
            sub_140949104(6LL, v70, *v66, v72);
        }
        sub_140948594(v66);
        return 0;
      }
      if ( a3 == 5 )
      {
        v65 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        v14 = sub_140948638(v65, a2, &Size);
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        v49 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        v14 = sub_140948AC4(v49, a2, &Size);
      }
LABEL_116:
      v9 = v14;
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a6 + 8) = Size;
        return v9;
      }
      goto LABEL_31;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        v14 = sub_1407772C8(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        v14 = sub_1406DCD40(a6);
      }
LABEL_30:
      if ( v14 != -1073741802 )
      {
LABEL_31:
        *(_DWORD *)a6 = v14;
        return (unsigned int)-1073741536;
      }
      return 0;
    }
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      Size = 0LL;
      v63 = sub_14077B0A4(5LL, a2, &Size);
      if ( v63 < 0 )
        goto LABEL_169;
      v64 = (void *)Size;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v75 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = a1;
      do
      {
        v76 = 0;
        v63 = sub_14077A8E0(4LL, v64, sub_140948520, &DestinationString, *(_QWORD *)v71);
      }
      while ( v63 >= 0 && v76 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      Size = 0LL;
      v63 = sub_14077B0A4(6LL, a2, &Size);
      if ( v63 < 0 )
        goto LABEL_169;
      v64 = (void *)Size;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v75 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = a1;
      do
      {
        v76 = 0;
        v63 = sub_14077A8E0(6LL, v64, sub_140948520, &DestinationString, *(_QWORD *)v71);
      }
      while ( v63 >= 0 && v76 );
    }
    if ( v64 )
      sub_14077B394(v64);
LABEL_169:
    *(_DWORD *)a6 = v63;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      *(_QWORD *)&Guid.Data1 = 0LL;
      Size = 0LL;
      v37 = 0LL;
      v72[0] = 0;
      v38 = sub_14077B0A4(5LL, a2, &Guid);
      v39 = *(void **)&Guid.Data1;
      if ( v38 >= 0 )
      {
        v40 = sub_14077B0A4(1LL, *(_QWORD *)(a6 + 24), &Size);
        v37 = (_DWORD *)Size;
        if ( v40 >= 0 )
        {
          sub_14076A134(4u, (ULONG_PTR)v39, Size, (__int64)v72);
          if ( !v72[0] )
            sub_1406E4980(v41, (ULONG_PTR)v39, v42, (ULONG_PTR)v37);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      *(_QWORD *)&Guid.Data1 = 0LL;
      Size = 0LL;
      v37 = 0LL;
      v61 = sub_14077B0A4(6LL, a2, &Guid);
      v39 = *(void **)&Guid.Data1;
      if ( v61 >= 0 )
      {
        v62 = sub_14077B0A4(1LL, *(_QWORD *)(a6 + 24), &Size);
        v37 = (_DWORD *)Size;
        if ( v62 >= 0 )
          sub_14076A134(6u, (ULONG_PTR)v39, Size, (__int64)v72);
      }
    }
    if ( v39 )
      sub_14077B394(v39);
    if ( !v37 )
      return 0;
    goto LABEL_96;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v27 = sub_14077A710(a3);
      v29 = sub_14076A3C4(v27, v28, 0LL);
      *(_DWORD *)a6 = v29;
      return (v29 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v35 = sub_14077A710(a3);
      sub_14076A0A8(v35, v36);
      return 0;
    }
    Size = 0LL;
    v43 = sub_14077A710(a3);
    if ( (int)sub_14077B0A4(v43, v44, &Size) < 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v37 = (_DWORD *)Size;
    ExAcquirePushLockExclusiveEx(Size, 0LL);
    v46 = v37[8];
    v37[8] = v46 | 1;
    ExReleasePushLockEx((ULONG_PTR)v37, 0LL);
    KeLeaveCriticalRegion();
    if ( (v46 & 1) != 0 )
      sub_14076A0A8(v43, (__int64)a2);
LABEL_96:
    sub_14077B394(v37);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v50 = *(WCHAR **)(a6 + 8);
        DestinationString = 0LL;
        Guid = 0LL;
        RtlInitUnicodeString(&DestinationString, v50 + 2);
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
          Guid = 0LL;
        if ( *(int *)a6 < 0 )
        {
          if ( (byte_140C0DD4A & 0x10) != 0 )
          {
            v53 = sub_140776274(&Guid);
            sub_1405613C4(
              (unsigned int)-!v53,
              (const EVENT_DESCRIPTOR *)qword_14003B2F0,
              v54,
              a2,
              (unsigned __int64)&Guid & -(__int64)!v53,
              *(_DWORD *)v50,
              *(_DWORD *)a6);
          }
        }
        else if ( (byte_140C0DD4A & 8) != 0 )
        {
          v51 = sub_140776274(&Guid);
          sub_1405613C4(
            (unsigned int)-!v51,
            (const EVENT_DESCRIPTOR *)qword_14003B580,
            v52,
            a2,
            (unsigned __int64)&Guid & -(__int64)!v51,
            *(_DWORD *)v50,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 )
        {
          if ( v50[2] )
          {
            Size = MEMORY[0xFFFFF78000000014];
            sub_14077198C(a1, (__int64)(v50 + 2), 2, 0LL, 0LL, (__int64)qword_140017C80, 16, (__int64)&Size, 8u, 0);
          }
          if ( sub_140778D60(a2) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            if ( DestinationString.Length >= 2u )
            {
              if ( *DestinationString.Buffer )
              {
                v55 = sub_140779C10((__int64)&DestinationString, 0x746C6644u);
                if ( v55 )
                {
                  v56 = (_DWORD *)v55[8];
                  if ( v56 )
                    *v56 |= 1u;
                  ObfDereferenceObject(v55);
                }
              }
            }
          }
        }
        if ( v50 )
          ExFreePoolWithTag(v50, 0x47706E50u);
      }
      else if ( a3 == 3 )
      {
        v57 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v57 )
        {
          v58 = v57[1];
          if ( v58 )
            sub_140949104(0LL, v58, *v57, 0LL);
          v59 = v57[2];
          if ( v59 )
            sub_140949104(1LL, v59, *v57, 0LL);
          v60 = v57[3];
          if ( v60 )
            sub_140949104(2LL, v60, *v57, 0LL);
        }
        sub_1409485D8(v57);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      Size = 0LL;
      v14 = sub_1409486E4(a2);
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      Size = 0LL;
      v14 = sub_140948814(a2, &Size);
    }
    goto LABEL_116;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    v14 = sub_1406DCFC0(
            a3,
            *(_QWORD *)(a6 + 16),
            *(_QWORD *)(a6 + 24),
            *(_QWORD *)(a6 + 32),
            *(_DWORD *)(a6 + 40),
            *(_QWORD *)(a6 + 48));
    goto LABEL_30;
  }
  v13 = v12 - 5;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v9;
    if ( a5 != 1 )
    {
      if ( *(int *)a6 < 0 )
        return v9;
      sub_14077A624(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        *(_DWORD *)(a6 + 28),
        *(PCWSTR *)(a6 + 32),
        *(_DWORD *)(a6 + 40));
      if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        v32 = *(ULONG_PTR **)(a6 + 8);
        if ( *v32 )
        {
          v33 = v32[1];
          if ( v33 )
            sub_140949104(5LL, v33, *v32, 0LL);
          v34 = v32[2];
          if ( v34 )
            sub_14076A134(5u, v34, *v32, 0LL);
        }
        sub_140768E44(v32);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v20 = *(_DWORD *)(a6 + 40), Pool2 = 0LL, Guid.Data1 = 0, !v20)
       || (Pool2 = (void *)ExAllocatePool2(256LL, v20, 1198550608LL)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_57:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_58:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v31 = 0LL;
        Size = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1 && *(_DWORD *)(a6 + 40) == 78 && sub_1406E87E8(*(PCWSTR *)(a6 + 32)) )
          v31 = *(_QWORD *)(a6 + 32);
        v14 = sub_140768D10((__int64)a2, v31, (PVOID *)&Size);
        v9 = v14;
        if ( v14 >= 0 )
        {
          *(_QWORD *)(a6 + 8) = Size;
          return v9;
        }
        goto LABEL_31;
      }
      v47 = sub_14077A710(a3);
      sub_14077B908(a1, a2, v47);
      v30 = (v9 & 0x80000000) != 0;
LABEL_55:
      if ( v30 )
        return v9;
      goto LABEL_58;
    }
    LODWORD(Size) = *(_DWORD *)(a6 + 40);
    if ( a3 == 1 )
    {
      v22 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v22 - 1) > 0x24 || !sub_1402DF5A4(a3 - 1, v22) || sub_1402DE48C(v24, v23) )
      {
        v25 = sub_14077CD90(
                qword_140D00AC0,
                (_DWORD)a2,
                *(_QWORD *)(a6 + 16),
                v22,
                (__int64)&Guid,
                (__int64)Pool2,
                (__int64)&Size,
                0);
        goto LABEL_42;
      }
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_81;
      v48 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v48 - 1) > 0x24 || !sub_1402426B4(v48) || sub_14064F720(v48) )
      {
        v25 = sub_1406BDAE4(
                *(__int64 *)&qword_140D00AC0,
                (__int64)a2,
                *(_QWORD *)(a6 + 16),
                v48,
                (__int64)&Guid,
                (__int64)Pool2,
                (__int64)&Size);
LABEL_42:
        v26 = v25;
        if ( v25 >= 0 )
        {
          if ( Guid.Data1 != *(_DWORD *)(a6 + 28) || (_DWORD)Size != *(_DWORD *)(a6 + 40) )
          {
LABEL_80:
            if ( v26 != -1073741790 )
              goto LABEL_81;
LABEL_51:
            *(_DWORD *)a6 = v26;
            v9 = -1073741536;
            goto LABEL_52;
          }
          if ( !memcmp(Pool2, *(const void **)(a6 + 32), (unsigned int)Size) )
            goto LABEL_51;
        }
        if ( v26 == -1073741275 )
        {
          if ( !*(_DWORD *)(a6 + 40) )
            goto LABEL_51;
LABEL_81:
          v9 = 0;
LABEL_52:
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
          v30 = (v9 & 0x80000000) != 0;
          if ( v9 )
            goto LABEL_55;
          goto LABEL_57;
        }
        goto LABEL_80;
      }
    }
    v26 = -1073741790;
    goto LABEL_51;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        sub_14077A624(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      sub_14077A624(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    return 0;
  }
  if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
    goto LABEL_14;
  v14 = sub_14077A4D4(
          a3,
          (_DWORD)a2,
          a3,
          *(_DWORD *)(a6 + 24),
          *(_QWORD *)(a6 + 32),
          *(_QWORD *)(a6 + 40),
          *(_QWORD *)(a6 + 48));
  if ( v14 >= 0 || v14 == -1073741275 || v14 == -1073741789 || v14 == -1073741772 )
    goto LABEL_31;
  v9 = 0;
LABEL_14:
  if ( !*(_QWORD *)(a6 + 16) )
  {
    v15 = sub_14077A710(a3);
    sub_14077B908(a1, a2, v15);
  }
  return v9;
}
