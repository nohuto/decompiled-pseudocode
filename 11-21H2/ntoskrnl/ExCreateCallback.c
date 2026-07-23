/*
 * XREFs of ExCreateCallback @ 0x1406E0E40
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_140607B20 @ 0x140607B20 (sub_140607B20.c)
 *     sub_14081E1F0 @ 0x14081E1F0 (sub_14081E1F0.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     sub_140858BAC @ 0x140858BAC (sub_140858BAC.c)
 *     IoRegisterBootDriverCallback @ 0x140863630 (IoRegisterBootDriverCallback.c)
 *     sub_140864CD4 @ 0x140864CD4 (sub_140864CD4.c)
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 *     sub_140B01758 @ 0x140B01758 (sub_140B01758.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B28EB0 @ 0x140B28EB0 (sub_140B28EB0.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 *     sub_140B2CD08 @ 0x140B2CD08 (sub_140B2CD08.c)
 *     sub_140B3059C @ 0x140B3059C (sub_140B3059C.c)
 *     sub_140B3129C @ 0x140B3129C (sub_140B3129C.c)
 *     sub_140B509E0 @ 0x140B509E0 (sub_140B509E0.c)
 * Callees:
 *     sub_140257E3C @ 0x140257E3C (sub_140257E3C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rdi
  __m128i v5; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  NTSTATUS v11; // ebx
  char *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  PVOID Object; // [rsp+50h] [rbp-9h] BYREF
  __int128 v17; // [rsp+58h] [rbp-1h] BYREF
  __m128i v18; // [rsp+68h] [rbp+Fh]
  __int128 v19; // [rsp+78h] [rbp+1Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *(__m128i *)&ObjectAttributes->ObjectName;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  Handle = 0LL;
  v18 = v5;
  Object = 0LL;
  v17 = v8;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v18.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | 0x200;
  v19 = v10;
  if ( v5.m128i_i64[0] )
  {
    v11 = ObOpenObjectByName((__int64)&v17, (__int64)qword_140D06D70, 0, 0LL, 0, 0LL, (__int64)&Handle);
    if ( v11 >= 0 )
    {
LABEL_7:
      Object = 0LL;
      v11 = ObReferenceObjectByHandle(Handle, 0, qword_140D06D70, 0, &Object, 0LL);
      ZwClose(Handle);
      if ( v11 >= 0 )
        *CallbackObject = (PCALLBACK_OBJECT)Object;
      return v11;
    }
  }
  else
  {
    v11 = -1073741823;
  }
  if ( Create )
  {
    v11 = sub_14072B3B0(0, (_DWORD)qword_140D06D70, (unsigned int)&v17, 0);
    if ( v11 >= 0 )
    {
      v12 = (char *)Object;
      *(_DWORD *)Object = 1819042115;
      v12[32] = AllowMultipleCallbacks;
      *((_QWORD *)v12 + 3) = v12 + 16;
      *((_QWORD *)v12 + 2) = v12 + 16;
      *((_QWORD *)v12 + 1) = 0LL;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15890, 0LL);
      v13 = (_QWORD *)qword_140C15888;
      v14 = v12 + 40;
      if ( *(__int64 **)qword_140C15888 != &qword_140C15880 )
        __fastfail(3u);
      *((_QWORD *)v12 + 6) = qword_140C15888;
      *v14 = &qword_140C15880;
      *v13 = v14;
      qword_140C15888 = (__int64)(v12 + 40);
      sub_140257E3C((__int64)CurrentThread);
      v11 = sub_140729C30(v12, 0LL, 0, 0LL, (__int64)&Handle);
      if ( v11 >= 0 )
        goto LABEL_7;
    }
  }
  return v11;
}
