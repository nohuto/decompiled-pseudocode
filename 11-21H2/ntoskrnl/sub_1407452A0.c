/*
 * XREFs of sub_1407452A0 @ 0x1407452A0
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407452A0(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int v15; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  v17 = 0;
  v18 = 0;
  v5 = a2;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = a1;
  *a5 = 0LL;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  Guid = 0LL;
  if ( !(_BYTE)a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( !a4 )
  {
    if ( a2 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
      v14 = *(_QWORD *)(v6 + 48);
      v17 = 78;
      v15 = sub_14077CD90(qword_140D00AC0, v14, v5, 37, (__int64)&v18, (__int64)SourceString, (__int64)&v17, 0);
      ExReleaseResourceLite(&stru_140C462A0);
      KeLeaveCriticalRegion();
      if ( v15 >= 0 && v18 == 1 && RtlCreateUnicodeString(&UnicodeString, SourceString) )
      {
        v7 = RtlGUIDFromString(&UnicodeString, &Guid);
        if ( v7 >= 0 )
        {
          while ( 1 )
          {
            v6 = *(_QWORD *)(v6 + 16);
            if ( !v6 )
              break;
            if ( (GUID *)(v6 + 664) == &Guid || RtlCompareMemory((const void *)(v6 + 664), &Guid, 0x10uLL) == 16 )
              goto LABEL_19;
          }
LABEL_4:
          if ( v7 < 0 )
            return (unsigned int)v7;
          goto LABEL_5;
        }
LABEL_19:
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
      return (unsigned int)v7;
    p_Guid = &Guid;
LABEL_3:
    LOBYTE(a3) = 1;
    v7 = sub_1407454A8(p_Guid, &UnicodeString, a3);
    goto LABEL_4;
  }
  if ( !RtlCreateUnicodeString(&UnicodeString, a4) )
    return (unsigned int)-1073741670;
LABEL_5:
  Buffer = UnicodeString.Buffer;
  if ( UnicodeString.Buffer )
  {
    MaximumLength = UnicodeString.MaximumLength;
    Pool2 = (void *)ExAllocatePool2(256LL, UnicodeString.MaximumLength, 1852141648LL);
    *a5 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)v7;
}
