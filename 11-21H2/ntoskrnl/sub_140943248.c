/*
 * XREFs of sub_140943248 @ 0x140943248
 * Callers:
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_1407734D8 @ 0x1407734D8 (sub_1407734D8.c)
 *     sub_1409B6A58 @ 0x1409B6A58 (sub_1409B6A58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140943248(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, unsigned int *a6)
{
  wchar_t *v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  _DWORD *v10; // rdi
  unsigned int v11; // esi
  wchar_t *v12; // r14
  wchar_t *v13; // r15
  wchar_t *v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  unsigned int i; // r13d
  const wchar_t *v18; // rax
  __int64 v19; // rcx
  wchar_t *v20; // rax
  char v21; // cl
  unsigned int *v22; // r13
  _DWORD Size[3]; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t *Str; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  void *v28; // [rsp+78h] [rbp-88h]
  unsigned int *v29; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v32[20]; // [rsp+D0h] [rbp-30h] BYREF

  v28 = a5;
  v7 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v29 = a6;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  memset(Size, 0, sizeof(Size));
  Str = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  v9 = sub_14076E894(a1, (__int64)&Size[1], 131097);
  if ( v9 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    ObjectAttributes.RootDirectory = *(HANDLE *)&Size[1];
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v9 >= 0 )
    {
      ZwClose(*(HANDLE *)&Size[1]);
      *(_QWORD *)&Size[1] = KeyHandle;
      v9 = sub_14067B838(KeyHandle, L"BootConfig", 320, &P);
    }
    ZwClose(*(HANDLE *)&Size[1]);
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  if ( v9 >= 0 )
  {
    v10 = P;
    v11 = *((_DWORD *)P + 3);
    v12 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    if ( *((_DWORD *)P + 1) == 1 && (unsigned int)sub_1407734D8((char *)P + *((unsigned int *)P + 2), v11, &Str, Size) )
    {
      v13 = Str;
      v11 = Size[0];
      v12 = Str;
      v14 = wcsstr(Str, L";(");
      v7 = v14;
      if ( v14 && (v15 = (v11 >> 1) - 2, v13[v15] == 41) )
      {
        *v14 = 0;
        v7 = v14 + 2;
        v13[v15] = 0;
        memset(&v32[1], 0, 0x98uLL);
        v16 = v7;
        v32[0] = v7;
        for ( i = 1; ; ++i )
        {
          v20 = wcschr(v16, 0x2Cu);
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_15;
          }
          *v20 = 0;
          v18 = v20 + 1;
          if ( i >= 0x13 )
            break;
          v19 = i;
          v32[v19] = v18;
          v16 = v18;
        }
        v21 = 1;
      }
      else
      {
        v21 = 0;
      }
    }
    else
    {
      LODWORD(v13) = (_DWORD)Str;
      v21 = 0;
    }
LABEL_15:
    v22 = v29;
    if ( *v29 < v11 )
    {
      v9 = -1073741789;
    }
    else if ( v10[1] == 8 )
    {
      if ( v7 )
      {
        if ( v21 )
          v9 = -1073741619;
        else
          v9 = sub_1409B6A58((_DWORD)v13, 0, 0, 0, 1, (__int64)v32, (__int64)v28, *v29, (__int64)v29);
      }
      else
      {
        memmove(v28, v12, v11);
      }
    }
    else
    {
      v9 = -1073741584;
    }
    *v22 = v11;
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)v9;
}
