/*
 * XREFs of sub_1409949AC @ 0x1409949AC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1409949AC(wchar_t *a1, __int64 a2)
{
  signed int v3; // ebx
  __int64 v4; // r8
  wchar_t *v5; // rax
  __int16 v6; // r8
  unsigned __int16 Length; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rbx
  __int128 v13; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v16; // [rsp+30h] [rbp-10h] BYREF

  v3 = 0;
  String2 = 0LL;
  if ( !a1 )
    goto LABEL_7;
  v4 = 0x7FFFLL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v3 = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    String2.Buffer = a1;
    v6 = 2 * v4;
    Length = -2 - v6;
    String2.Length = -2 - v6;
    String2.MaximumLength = -v6;
  }
  else
  {
LABEL_7:
    Length = String2.Length;
  }
  if ( v3 >= 0 )
  {
    if ( Length > 8u
      && (RtlPrefixUnicodeString(&stru_14000A730, &String2, 0) || RtlPrefixUnicodeString(&stru_14000A720, &String2, 0)) )
    {
      CurrentThread = KeGetCurrentThread();
      String2.Buffer += 4;
      String2.MaximumLength -= 8;
      String2.Length = Length - 8;
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
      v9 = KeGetCurrentThread();
      --*((_WORD *)v9 + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C229A0, 0LL);
      v10 = qword_140C229C0;
      if ( (__int64 *)qword_140C229C0 == &qword_140C229C0 )
        goto LABEL_20;
      do
      {
        v11 = *(__m128i *)(v10 + 32);
        v12 = v10;
        *(_QWORD *)&v16.Length = *(_QWORD *)(v10 + 32);
        v16.Length -= 8;
        v16.MaximumLength -= 8;
        v16.Buffer = (wchar_t *)(_mm_srli_si128(v11, 8).m128i_u64[0] + 8);
        if ( RtlEqualUnicodeString(&String2, &v16, 1u) )
          break;
        v10 = *(_QWORD *)v10;
        v12 = 0LL;
      }
      while ( (__int64 *)v10 != &qword_140C229C0 );
      if ( !v12 )
      {
LABEL_20:
        v3 = -1073741772;
      }
      else if ( *(_DWORD *)(v12 + 104) == 3 )
      {
        *(_OWORD *)a2 = *(_OWORD *)(v12 + 112);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v12 + 128);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v12 + 144);
        v13 = *(_OWORD *)(v12 + 148);
        v3 = 0;
        *(_OWORD *)(a2 + 36) = v13;
      }
      else
      {
        v3 = -1073741661;
      }
      sub_1402935D0((ULONG_PTR)&qword_140C229A0);
      sub_1402935D0((ULONG_PTR)&qword_140C222D0);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v3;
}
