/*
 * XREFs of IsRegNameEqual @ 0x1C0295FA4
 * Callers:
 *     bNotIsKeySymbolicLink @ 0x1C01195E0 (bNotIsKeySymbolicLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsRegNameEqual(HANDLE KeyHandle, HANDLE a2, _DWORD *a3)
{
  int v3; // ebx
  ULONG v7; // ecx
  ULONG v8; // eax
  unsigned int v9; // edx
  char *v10; // rax
  unsigned int *v11; // rsi
  char *v12; // r14
  NTSTATUS v13; // edi
  unsigned int *v14; // rcx
  unsigned __int16 *v15; // rax
  signed __int64 v16; // r14
  int v17; // edx
  int v18; // ecx
  bool v19; // zf
  ULONG Length; // [rsp+70h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  *a3 = 0;
  Length = 0;
  ResultLength = 0;
  ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
  ZwQueryKey(a2, KeyNameInformation, 0LL, 0, &ResultLength);
  if ( Length + 2 >= Length
    && (v7 = ResultLength + 2, ResultLength + 2 >= ResultLength)
    && (v8 = Length + 5, ResultLength += 2, Length + 5 >= Length + 2)
    && (Length = v8 & 0xFFFFFFFC, v9 = (v8 & 0xFFFFFFFC) + v7, v9 >= (v8 & 0xFFFFFFFC))
    && v9
    && (v10 = (char *)Win32AllocPoolZInit(v9, 1718382187LL), (v11 = (unsigned int *)v10) != 0LL) )
  {
    v12 = &v10[Length];
    v13 = ZwQueryKey(KeyHandle, KeyNameInformation, v10, Length, &Length);
    v14 = v11;
    if ( v13 >= 0 )
    {
      *((_WORD *)v11 + ((unsigned __int64)*v11 >> 1) + 2) = 0;
      v13 = ZwQueryKey(a2, KeyNameInformation, v12, ResultLength, &ResultLength);
      v14 = v11;
      if ( v13 >= 0 )
      {
        *(_WORD *)&v12[2 * ((unsigned __int64)*(unsigned int *)v12 >> 1) + 4] = 0;
        v15 = (unsigned __int16 *)(v11 + 1);
        v16 = v12 - (char *)v11;
        do
        {
          v17 = *(unsigned __int16 *)((char *)v15 + v16);
          v18 = *v15 - v17;
          if ( v18 )
            break;
          ++v15;
        }
        while ( v17 );
        v19 = v18 == 0;
        v14 = v11;
        LOBYTE(v3) = v19;
        *a3 = v3;
      }
    }
    Win32FreePool(v14);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v13;
}
