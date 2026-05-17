/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180003390
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180003BFC (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180003C68 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x18009A020 (_snwprintf_s.c)
 *     Feature_997142843__private_IsEnabledDeviceUsage @ 0x18009F4E8 (Feature_997142843__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // esi
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int16 *v17; // rax
  unsigned int v18; // eax
  wchar_t Buffer[16]; // [rsp+48h] [rbp-60h] BYREF

  v8 = a2;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v10 = *a6 & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 < 0xC000u )
  {
    if ( !(_WORD)v8 )
    {
      v11 = -1073741811;
LABEL_38:
      v14 = a1;
      goto LABEL_39;
    }
    v11 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_38;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( (unsigned int)Feature_997142843__private_IsEnabledDeviceUsage() )
    {
      if ( v12 < v10 )
      {
LABEL_19:
        if ( !v12 )
        {
          v11 = -1073741789;
          goto LABEL_38;
        }
        memmove(a5, Buffer, v12);
        *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
        goto LABEL_21;
      }
      if ( v10 >= 2 )
      {
        v12 = v10 - 2;
        goto LABEL_19;
      }
    }
    else
    {
      v13 = *a6;
      if ( v12 < *a6 )
        goto LABEL_19;
      if ( v13 >= 2 )
      {
        v12 = v13 - 2;
        goto LABEL_19;
      }
    }
    v12 = 0;
    goto LABEL_19;
  }
  v11 = -1073741816;
  v14 = a1;
  v15 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
  v16 = v15;
  if ( !v15 )
    goto LABEL_39;
  if ( *(_WORD *)(v15 + 10) != (_WORD)v8 )
    goto LABEL_39;
  v17 = (unsigned __int16 *)(v15 + 12);
  if ( !v17 )
    goto LABEL_39;
  v11 = 0;
  if ( a3 )
    *a3 = *v17;
  if ( a4 )
    *a4 = *(unsigned __int16 *)(v16 + 14);
  if ( !a5 )
    goto LABEL_39;
  v12 = 2 * *(unsigned __int8 *)(v16 + 16);
  v18 = *a6;
  if ( v12 >= *a6 )
  {
    if ( v18 < 2 )
    {
      *a6 = v12;
      v12 = 0;
    }
    else
    {
      v12 = v18 - 2;
    }
  }
  if ( v12 )
  {
    memmove(a5, (const void *)(v16 + 18), v12);
    *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
LABEL_21:
    *a6 = v12;
    goto LABEL_38;
  }
  v11 = -1073741789;
LABEL_39:
  RtlReleaseSRWLockExclusive(v14 + 8);
  return v11;
}
