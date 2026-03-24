/*
 * XREFs of AcpiPccRingDoorbell @ 0x1C005B060
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x1C005ACD0 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C005B278 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C005B350 (WriteIoMemRaw.c)
 */

/*
 * Hex-Rays decompilation failed for AcpiPccRingDoorbell @ 0x1C005B060
 * Reason: Hex-Rays returned no pseudocode for 0x1C005B060
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005B060: mov     [rsp+arg_0], rbx
 * 00000001C005B065: mov     [rsp+arg_8], rbp
 * 00000001C005B06A: push    rdi
 * 00000001C005B06B: sub     rsp, 20h
 * 00000001C005B06F: lea     rdi, [rdx+288h]
 * 00000001C005B076: mov     rbx, rdx
 * 00000001C005B079: mov     rcx, rdi; SpinLock
 * 00000001C005B07C: call    cs:__imp_KeAcquireSpinLockRaiseToDpc
 * 00000001C005B083: nop     dword ptr [rax+rax+00h]
 * 00000001C005B088: mov     r8d, [rbx+4]
 * 00000001C005B08C: xor     ebp, ebp
 * 00000001C005B08E: mov     r9b, al
 * 00000001C005B091: mov     [rbx+280h], ebp
 * 00000001C005B097: mov     eax, r8d
 * 00000001C005B09A: shr     eax, 1
 * 00000001C005B09C: mov     edx, eax
 * 00000001C005B09E: and     edx, 0Fh
 * 00000001C005B0A1: lea     ecx, [rdx-7]
 * 00000001C005B0A4: test    ecx, 0FFFFFFF9h
 * 00000001C005B0AA: jnz     short loc_1C005B0C4
 * 00000001C005B0AC: cmp     edx, 0Dh
 * 00000001C005B0AF: jz      short loc_1C005B0C4
 * 00000001C005B0B1: lea     eax, ds:0FFFFFFFFFFFFFFFEh[rax*2]
 * 00000001C005B0B8: xor     eax, r8d
 * 00000001C005B0BB: and     eax, 1Eh
 * 00000001C005B0BE: xor     eax, r8d
 * 00000001C005B0C1: mov     [rbx+4], eax
 * 00000001C005B0C4: mov     eax, 1
 * 00000001C005B0C9: mov     dl, r9b; NewIrql
 * 00000001C005B0CC: xchg    eax, [rbx+1B0h]
 * 00000001C005B0D2: mov     rcx, rdi; SpinLock
 * 00000001C005B0D5: call    cs:__imp_KeReleaseSpinLock
 * 00000001C005B0DC: nop     dword ptr [rax+rax+00h]
 * 00000001C005B0E1: mov     rax, [rbx+30h]
 * 00000001C005B0E5: cmp     [rax], bp
 * 00000001C005B0E8: jge     short loc_1C005B0F9
 * 00000001C005B0EA: mov     al, [rbx]
 * 00000001C005B0EC: inc     al
 * 00000001C005B0EE: test    al, 0FEh
 * 00000001C005B0F0: jnz     short loc_1C005B0F9
 * 00000001C005B0F2: lock inc cs:AcpiPccSciReferenceCount
 * 00000001C005B0F9: movzx   eax, byte ptr [rbx+58h]
 * 00000001C005B0FD: cmp     al, 2
 * 00000001C005B0FF: jb      short loc_1C005B106
 * 00000001C005B101: mov     rdx, rbp
 * 00000001C005B104: jmp     short loc_1C005B13E
 * 00000001C005B106: movzx   r8d, byte ptr [rbx+5Bh]
 * 00000001C005B10B: mov     edx, eax
 * 00000001C005B10D: mov     rcx, [rbx+5Ch]
 * 00000001C005B111: call    ReadIoMemRaw
 * 00000001C005B116: mov     rdx, rax
 * 00000001C005B119: test    rax, rax
 * 00000001C005B11C: jz      short loc_1C005B13E
 * 00000001C005B11E: mov     cl, [rbx+5Ah]
 * 00000001C005B121: test    cl, cl
 * 00000001C005B123: jz      short loc_1C005B128
 * 00000001C005B125: shr     rdx, cl
 * 00000001C005B128: mov     cl, [rbx+59h]
 * 00000001C005B12B: cmp     cl, 40h ; '@'
 * 00000001C005B12E: jnb     short loc_1C005B13E
 * 00000001C005B130: mov     eax, 1
 * 00000001C005B135: shl     rax, cl
 * 00000001C005B138: dec     rax
 * 00000001C005B13B: and     rdx, rax
 * 00000001C005B13E: mov     rdi, [rbx+48h]
 * 00000001C005B142: movzx   eax, byte ptr [rbx+58h]
 * 00000001C005B146: and     rdi, rdx
 * 00000001C005B149: or      rdi, [rbx+40h]
 * 00000001C005B14D: cmp     al, 1
 * 00000001C005B14F: ja      short loc_1C005B1A6
 * 00000001C005B151: cmp     [rbx+5Ah], bpl
 * 00000001C005B155: jz      short loc_1C005B192
 * 00000001C005B157: movzx   r8d, byte ptr [rbx+5Bh]
 * 00000001C005B15C: mov     edx, eax
 * 00000001C005B15E: mov     rcx, [rbx+5Ch]
 * 00000001C005B162: call    ReadIoMemRaw
 * 00000001C005B167: mov     cl, [rbx+59h]
 * 00000001C005B16A: mov     edx, 1
 * 00000001C005B16F: mov     r8b, [rbx+5Ah]
 * 00000001C005B173: shl     edx, cl
 * 00000001C005B175: mov     cl, r8b
 * 00000001C005B178: dec     edx
 * 00000001C005B17A: shl     rdi, cl
 * 00000001C005B17D: movsxd  r9, edx
 * 00000001C005B180: shl     r9, cl
 * 00000001C005B183: and     rdi, r9
 * 00000001C005B186: not     r9
 * 00000001C005B189: and     r9, rax
 * 00000001C005B18C: mov     al, [rbx+58h]
 * 00000001C005B18F: or      rdi, r9
 * 00000001C005B192: movzx   r8d, byte ptr [rbx+5Bh]
 * 00000001C005B197: mov     r9, rdi
 * 00000001C005B19A: mov     rcx, [rbx+5Ch]
 * 00000001C005B19E: movzx   edx, al
 * 00000001C005B1A1: call    WriteIoMemRaw
 * 00000001C005B1A6: mov     eax, [rbx+0Ch]
 * 00000001C005B1A9: lea     rcx, [rbx+1B8h]
 * 00000001C005B1B0: imul    rdx, rax, -0Ah
 * 00000001C005B1B4: xor     r9d, r9d
 * 00000001C005B1B7: xor     r8d, r8d
 * 00000001C005B1BA: call    cs:__imp_KeSetTimer2
 * 00000001C005B1C1: nop     dword ptr [rax+rax+00h]
 * 00000001C005B1C6: mov     rbx, [rsp+28h+arg_0]
 * 00000001C005B1CB: mov     rbp, [rsp+28h+arg_8]
 * 00000001C005B1D0: add     rsp, 20h
 * 00000001C005B1D4: pop     rdi
 * 00000001C005B1D5: retn
 */
