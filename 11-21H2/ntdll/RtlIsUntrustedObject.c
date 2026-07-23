/*
 * XREFs of RtlIsUntrustedObject @ 0x1800F1520
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindAceByType @ 0x180010EE0 (RtlFindAceByType.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQuerySecurityObject @ 0x1800A6CC0 (NtQuerySecurityObject.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  ACL **Heap; // rbx
  char v6; // bp
  NTSTATUS result; // eax
  int v8; // esi
  ACL *v9; // rdi
  _BYTE *AceByType; // rax
  ULONG LengthNeeded; // [rsp+30h] [rbp-C8h] BYREF
  ULONG Index[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+40h] [rbp-B8h] BYREF

  *IsUntrustedObject = 1;
  Heap = (ACL **)SecurityDescriptor;
  if ( !Object && Handle )
  {
    v6 = 0;
    result = NtQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x7Cu, &LengthNeeded);
    v8 = result;
    if ( result < 0 )
    {
      if ( result != -1073741789 )
        return result;
      Heap = (ACL **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, LengthNeeded);
      if ( !Heap )
        return v8 - 12;
      v6 = 1;
      v8 = NtQuerySecurityObject(Handle, 0x10u, Heap, 0x7Cu, &LengthNeeded);
      if ( v8 < 0 )
      {
LABEL_21:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v8;
      }
    }
    if ( (*((_BYTE *)Heap + 2) & 0x10) != 0 )
    {
      if ( *((__int16 *)Heap + 1) >= 0 )
      {
        v9 = Heap[3];
      }
      else
      {
        if ( !*((_DWORD *)Heap + 3) )
          goto LABEL_19;
        v9 = (ACL *)((char *)Heap + *((unsigned int *)Heap + 3));
      }
      if ( v9 )
      {
        Index[0] = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType(v9, 0x11u, Index);
          if ( !AceByType )
            break;
          if ( (AceByType[1] & 8) == 0 )
          {
            if ( !AceByType[9] || *(_DWORD *)&AceByType[4 * (unsigned __int8)AceByType[9] + 12] < 0x2000u )
              goto LABEL_20;
            break;
          }
        }
      }
    }
LABEL_19:
    *IsUntrustedObject = 0;
LABEL_20:
    if ( !v6 )
      return v8;
    goto LABEL_21;
  }
  return -1073741811;
}
