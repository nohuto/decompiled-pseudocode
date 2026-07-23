/*
 * XREFs of sub_140A5B400 @ 0x140A5B400
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140A5B400()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  size_t v3; // r8
  __int64 v4; // rcx
  void *v5; // rcx
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( byte_140C4A429 )
  {
    LODWORD(v0) = HIDWORD(KeGetPcr()[1].LockArray);
    v1 = 4096LL;
    if ( ((_DWORD)v0
       || (v6 = sub_1403B3BA0(), (int)KeAllocateProcessorProfileStructures(v6, 4096LL, &qword_140C4A420, 1) >= 0))
      && (v8 = qword_140C4A420 + 160 * v0, (int)KeAllocateProcessorProfileStructures(0, 0LL, &v8, 0) >= 0) )
    {
      if ( dword_140C4A464 )
        v1 = dword_140C4A464 * (0x1000u / dword_140C4A464);
      v2 = v8;
      v3 = 8LL * (unsigned int)dword_140C4A418;
      if ( byte_140C4A428 )
      {
        v4 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v8 + 40) = v4;
        *(_QWORD *)(v2 + 48) = v1 + v4;
        *(_QWORD *)(v2 + 56) = v4;
        memset((void *)(v2 + 64), 0, v3);
        v5 = (void *)(v2 + 128);
      }
      else
      {
        v7 = *(_DWORD *)(v8 + 16);
        *(_DWORD *)(v8 + 20) = v7;
        *(_DWORD *)(v2 + 24) = v7 + v1;
        *(_DWORD *)(v2 + 28) = v7;
        memset((void *)(v2 + 32), 0, v3);
        v5 = (void *)(v2 + 96);
      }
      memset(v5, 0, 8LL * (unsigned int)dword_140C4A460);
      __writemsr(0x600u, v2);
    }
    else
    {
      byte_140C4A429 = 0;
    }
  }
}
