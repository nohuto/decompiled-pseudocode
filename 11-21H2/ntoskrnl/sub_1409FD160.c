/*
 * XREFs of sub_1409FD160 @ 0x1409FD160
 * Callers:
 *     sub_1409FBB20 @ 0x1409FBB20 (sub_1409FBB20.c)
 * Callees:
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_1409FE9A4 @ 0x1409FE9A4 (sub_1409FE9A4.c)
 *     sub_1409FEB28 @ 0x1409FEB28 (sub_1409FEB28.c)
 *     sub_1409FEBC8 @ 0x1409FEBC8 (sub_1409FEBC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1409FD160(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  wchar_t v9; // dx
  bool v12; // r15
  char v13; // r10
  char v14; // r12
  unsigned int i; // edi
  wchar_t v16; // cx
  NTSTATUS result; // eax
  __int64 v18; // rdi
  wchar_t *v19; // r14
  int v20; // eax
  const wchar_t *v21; // r8
  unsigned int v22; // ecx
  __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // rdi
  int v26; // edx
  const wchar_t *v27; // r8
  unsigned int v28; // ecx
  __int64 v29; // rbx
  int v30; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v32; // r14
  int v33; // eax
  __int64 v34; // rdi
  int v35; // ecx
  const wchar_t *v36; // r8
  unsigned int v37; // r15d
  __int64 v38; // rdi
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF
  bool v40; // [rsp+78h] [rbp+10h]

  v9 = *Src;
  GuidString = 0LL;
  v12 = v9 == 123;
  v13 = 0;
  v40 = v9 == 123;
  v14 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v16 = Src[i];
    if ( v16 == 41 )
      break;
    if ( v9 == 123 )
    {
      if ( v16 == 125 )
      {
        v13 = 1;
        goto LABEL_9;
      }
    }
    else if ( v16 == 45 )
    {
      goto LABEL_9;
    }
  }
  if ( v9 == 123 )
    return -1073741811;
LABEL_9:
  if ( i <= 8 )
  {
    if ( v9 != 123 )
      goto LABEL_30;
  }
  else
  {
    v12 = 1;
    v40 = 1;
  }
  if ( v13 == 1 )
  {
    ++i;
    GuidString.Buffer = Src;
    GuidString.Length = 2 * i;
    GuidString.MaximumLength = 2 * i;
    result = RtlGUIDFromString(&GuidString, a3);
    if ( result < 0 )
      return result;
    goto LABEL_14;
  }
LABEL_30:
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (i + 1), 0x72766E45u);
  v32 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  wcsncpy_s(PoolWithTag, i + 1, Src, i);
  v12 = v40;
  v32[i] = 0;
  if ( v40 )
    v33 = sub_1409FE9A4(v32, a3);
  else
    v33 = sub_1409FEB28(v32, a3);
  v24 = v33;
  ExFreePoolWithTag(v32, 0);
  if ( v24 < 0 )
    return v24;
LABEL_14:
  if ( i < a2 )
  {
    if ( Src[i] != 45 )
    {
LABEL_44:
      if ( Src[i] == 41 && (v12 || v14) )
      {
        *a7 = v12;
        *a8 = v14;
        return 0;
      }
      return -1073741811;
    }
    v18 = i + 1;
    if ( (unsigned int)v18 < a2 )
    {
      v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x22uLL, 0x72766E45u);
      if ( v19 )
      {
        v20 = v18;
        v21 = &Src[v18];
        do
        {
          if ( Src[v18] == 45 )
            break;
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < a2 );
        v22 = v18 - v20;
        if ( (unsigned int)(v18 - v20 - 1) > 7 )
          goto LABEL_48;
        v23 = v22;
        wcsncpy_s(v19, 0x11uLL, v21, v22);
        v19[v23] = 0;
        v24 = sub_1409FEB28(v19, a4);
        if ( v24 < 0 )
        {
LABEL_49:
          ExFreePoolWithTag(v19, 0);
          return v24;
        }
        v25 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v25 >= a2 )
          goto LABEL_48;
        v26 = v25;
        v27 = &Src[v25];
        do
        {
          if ( Src[v25] == 45 )
            break;
          v25 = (unsigned int)(v25 + 1);
        }
        while ( (unsigned int)v25 < a2 );
        v28 = v25 - v26;
        if ( (unsigned int)(v25 - v26 - 1) > 0xF )
          goto LABEL_48;
        v29 = v28;
        wcsncpy_s(v19, 0x11uLL, v27, v28);
        v19[v29] = 0;
        v30 = sub_1409FEBC8(v19, a5);
        if ( v30 < 0 )
        {
          v24 = v30;
          goto LABEL_49;
        }
        v34 = (unsigned int)(v25 + 1);
        if ( (unsigned int)v34 >= a2 )
          goto LABEL_48;
        v35 = v34;
        v36 = &Src[v34];
        do
        {
          if ( Src[v34] == 41 )
            break;
          v34 = (unsigned int)(v34 + 1);
        }
        while ( (unsigned int)v34 < a2 );
        v37 = v34;
        v38 = (unsigned int)(v34 - v35);
        if ( (unsigned int)(v38 - 1) > 0xF )
        {
LABEL_48:
          v24 = -1073741811;
          goto LABEL_49;
        }
        wcsncpy_s(v19, 0x11uLL, v36, (unsigned int)v38);
        v19[v38] = 0;
        v24 = sub_1409FEBC8(v19, a6);
        ExFreePoolWithTag(v19, 0);
        if ( v24 < 0 )
          return v24;
        i = v37;
        v14 = 1;
        if ( v37 < a2 )
        {
          v12 = v40;
          goto LABEL_44;
        }
        return -1073741811;
      }
      return -1073741670;
    }
  }
  return -1073741811;
}
